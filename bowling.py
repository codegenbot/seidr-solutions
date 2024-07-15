```
def bowling_score(frames):
    frames_list = [int(x) for x in frames.replace("/", "").split()]
    
    total_score = 0
    roll = 0
    
    i = 0
    while i < len(frames_list):
        if frames_list[i] == 10:
            if i+1 < len(frames_list):
                if frames_list[i+1] + frames_list[i+2] > 10:
                    total_score += (frames_list[i]*2) + frames_list[i+1]
                    roll = 3
                    i += 1
                else:
                    total_score += frame_score(frames_list[i], frames_list[i+1:i+3])
                    roll = 2
                    i += 2
            elif i == len(frames_list)-1:
                total_score += (frames_list[i]*2)
                roll = 2
        else:
            if len(str(frames_list[i])) == 1:
                total_score += frames_list[i] * 10
                roll = 2
            else:
                first_roll = int(str(frames_list[i])[0])
                second_roll = int(str(frames_list[i])[1])
                if first_roll + second_roll == 10:
                    if i+1 < len(frames_list):
                        if frames_list[i+1] + frames_list[i+2] > 10:
                            total_score += (frames_list[i]+frames_list[i+1]) * 2
                            roll = 3
                            i += 1
                        else:
                            total_score += frame_score(frames_list[i], frames_list[i+1:i+3])
                            roll = 2
                            i += 2
                    elif i == len(frames_list)-1:
                        total_score += (frames_list[i]+frames_list[i+1]) * 2
                        roll = 2
                else:
                    total_score += frame_score(frames_list[i], frames_list[i:i+2])
                    roll += 2
        
        if i < len(frames_list) - 1 and frames_list[i] + frames_list[i+1] > 10:
            i += 1

    return total_score