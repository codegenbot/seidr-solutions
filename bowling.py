```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            if int(frames[i]) + int(frames[i+1]) == 10:
                if frame_num < 10:
                    score += 10
                else:
                    last_frame = int(frames[i]) + int(frames[i+1])
                    score += last_frame
                frame_num += 1
            elif int(frames[i]) + int(frames[i+1]) > 10:
                first_roll = int(frames[i])
                second_roll = 10 - first_roll
                if frame_num < 10:
                    score += 10 + second_roll
                else:
                    last_frame = first_roll + second_roll
                    score += last_frame
                frame_num += 1
            else:
                score += int(frames[i]) + int(frames[i+1])
                frame_num += 1
        elif frames[i].isdigit():
            if int(frames[i]) == 10:
                if frame_num < 10:
                    score += 10
                else:
                    last_frame = int(frames[i])
                    score += last_frame
                frame_num += 1
            else:
                score += int(frames[i])
                frame_num += 1
    return score