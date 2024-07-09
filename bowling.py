def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i < len(frames) - 1:
                if frames[i+1] == "X":
                    score += 30
                    i += 1
                elif frames[i+1] == "/":
                    frame_score = int(frames[i]) + 10 + int(frames[i+1][1])
                    score += frame_score
                    i += 2
                else:
                    frame_score = int(frames[i]) + int(frames[i+1])
                    score += frame_score
                    i += 2
            else:
                score += 10
            i += 1
        elif frames[i] == "/":
            if i < len(frames) - 1:
                if frames[i+1] == "X" or frames[i+1] == "/":
                    i += 1
                else:
                    frame_score = int(frames[i-1][:1]) + 10 + int(frames[i])
                    score += frame_score
                    i += 2
            else:
                score += 10
        else:
            j = 0
            while j < len(frames[i]):
                if frames[i][j].isdigit():
                    j += 1
                elif frames[i][j] == "/":
                    score += min(10, int(frames[i][:j-1])) + 10 - int(frames[i][:j-1])
                    i += 2
                    break
            else:
                frame_score = int(frames[i])
                i += 1
                while i < len(frames) and frames[i].isdigit():
                    frame_score += int(frames[i])
                    i += 1
                score += frame_score

    return score