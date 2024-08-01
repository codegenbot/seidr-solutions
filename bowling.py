def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char.isdigit():
            strike = False
            if len(char) > 1:
                spare = True
                char = int(char)
            else:
                char = int(char)
            if char == 10:
                score += 10 + 10 * (frame_count - 1)
                strike = True
            elif spare:
                score += 10
                frame_count += 1
            else:
                score += char
                frame_count += 1
        elif char == "X":
            score += 10
            strike = True
            frame_count += 1
        elif char == "-":
            continue
        if strike and frame_count < 10:
            for _ in range(2):
                if frames[frame_count].isdigit():
                    char = int(frames[frame_count])
                    if char != 10:
                        score += char
                    else:
                        score += 10 + score // 10
                    break
                elif frames[frame_count] == "X":
                    score += 10
                    break
            frame_count += 1
        return score