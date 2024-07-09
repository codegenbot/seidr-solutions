def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            i += 2
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            j = int(frames[i])
            while j > 0:
                if frames[i].isdigit() and int(frames[i]) < 10:
                    frame_score += 10 - int(frames[i])
                elif frames[i] == "X":
                    frame_score += 10
                    i += 1
                    break
                else:
                    frame_score += int(frames[i])
                j -= 1
            if i < len(frames) - 1 and frames[i+1].isdigit():
                score += frame_score + int(frames[i+1])
            elif i == len(frames) - 2:
                score += frame_score
            else:
                score += frame_score
            i += 1
    return score