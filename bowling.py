def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            while char:
                if char == "X":
                    score += 10
                    strike = True
                elif char != "/":
                    score += int(char)
                    if not strike and frame_count < 10:
                        score += int(char)
                else:
                    score += 10 - int(char.split("/")[0])
                    spare = True
                char = char[1:]
            if not strike and not spare and frame_count < 10:
                score += 10
        frame_count += 1
    return score