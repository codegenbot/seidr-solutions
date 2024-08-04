```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, len(frames)+2):
        if frames[frame_index] == 'X':
            score += 10 + (10 if i < 11 else sum(int(x) for x in frames[frame_index+1:frame_index+3]))
            frame_index += 2
        elif re.match('^[0-9]{2}$', frames[frame_index]):
            first_roll = int(frames[frame_index][:1])
            second_roll = int(frames[frame_index][1:])
            if i < 11:
                score += first_roll + second_roll
                frame_index += 1
            else:
                score += first_roll
                frame_index += 1
        elif frames[frame_index] == '/':
            first_roll = int(frames[frame_index][:1])
            second_roll = 10 - first_roll
            if i < 11:
                score += first_roll + second_roll
                frame_index += 2
            else:
                score += first_roll
                frame_index += 1
    return score