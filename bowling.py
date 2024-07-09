def bowling_score(frames):
    score = 0
    frame_count = 0
    frames_list = frames.split("/")

    for frame in frames_list:
        if len(frame) == 1: 
            score += int(frame)
            frame_count += 1
        elif len(frame) == 2: 
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            if first_roll != 10:
                score += first_roll + second_roll
            else:
                score += 10 + next_frame(frames_list, frame_count)
            frame_count += 1
        else: 
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = 10 - (first_roll + second_roll)
            if first_roll != 10:
                score += first_roll + second_roll + third_roll
            elif second_roll != 10:
                score += 10 + next_frame(frames_list, frame_count)
            else:
                score += 10 + 10 + next_frame(frames_list, frame_count)
            frame_count += 1

    return score

def next_frame(frames_list, current_frame):
    for i in range(current_frame+1, len(frames_list)+1):
        if len(frames_list[i-1]) == 2:
            return int(frames_list[i-1][0]) + int(frames_list[i-1][1])
        else:
            return int(frames_list[i-1])