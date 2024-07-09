```
def bowling_score(frames):
    score = 0
    frame_scores = []
    for i in range(0, len(frames), 2):
        if frames[i:i+2].strip() == 'X':
            frame_scores.append(10)
        elif frames[i:i+2].strip().endswith('\/'):
            first_roll = int(frames[i])
            second_roll = 10 - first_roll
            frame_scores.append(first_roll + second_roll)
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll == 10:
                frame_scores.append(10)
            else:
                frame_scores.append(first_roll + second_roll)
    total_score = 0
    current_frame_score = 0
    for i in range(len(frame_scores)):
        if i < len(frame_scores) - 1 and frame_scores[i] == 10:
            total_score += frame_scores[i]
            next_frame = i + 1
            while next_frame < len(frame_scores) and (frame_scores[next_frame].endswith('\/') or frame_scores[next_frame] == 10):
                if frame_scores[next_frame].endswith('\/'):
                    first_roll = int(frame_scores[next_frame][0])
                    second_roll = 10 - first_roll
                    current_frame_score += first_roll + second_roll
                else:
                    current_frame_score += 10
                total_score += current_frame_score
                next_frame += 1
        else:
            total_score += frame_scores[i]
    return total_score