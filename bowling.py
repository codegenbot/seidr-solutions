```
def bowling_score(frames):
    score = 0
    bonus = 0
    previous_frame_score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == 'X':
                score += 10 + bonus
                if i < 7:
                    bonus = 20
                else:
                    first_roll_of_next_frame = frames[i+1][0]
                    if first_roll_of_next_frame in ['X', '/']:
                        bonus = 30
                    elif int(first_roll_of_next_frame) <= 2:
                        bonus = 10
            elif frame[1] == '/':
                score += 10 + previous_frame_score - int(frame[0])
                bonus = 10
        else:
            if i < 7 and int(frame) + int(frames[i+1].split()[0]) >= 10:
                score += 10 + int(frame)
                bonus = 0
            else:
                score += int(frame) + previous_frame_score
                bonus = 0
        previous_frame_score = score % 10
    return score