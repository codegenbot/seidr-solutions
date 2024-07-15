```
def bowling_score(frames):
    score = 0
    frames_list = [int(x) for x in frames.replace("/", "").split()]
    
    i = 0
    while i < len(frames_list):
        if frames_list[i] == 10:
            if i < 8:
                score += (frames_list[i] + frames_list[i+1] + frames_list[i+2]) * 2
                i += 3
            else:
                score += (frames_list[i] + frames_list[i+1]) * 2
                i += 2
        else:
            if len(str(frames_list[i])) == 2 and int(str(frames_list[i])[0]) + int(str(frames_list[i])[1]) == 10:
                if i < 8:
                    score += (frames_list[i] + frames_list[i+1] + frames_list[i+2]) * 2
                    i += 3
                else:
                    score += (frames_list[i] + frames_list[i+1]) * 2
                    i += 2
            else:
                if len(str(frames_list[i])) == 2:
                    first_roll = int(str(frames_list[i])[0])
                    second_roll = int(str(frames_list[i])[1])
                    if first_roll != 0 and second_roll != 0:
                        score += frames_list[i] + frames_list[i+1]
                        i += 2
                    elif first_roll == 10:
                        score += 10 + frames_list[i+1]
                        i += 2
                    else:
                        score += 10 + frames_list[i+1]
                        i += 2
                else:
                    score += frames_list[i] + (0 if i < 8 else 10)
                    i += 1

    return score