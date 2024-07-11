```
def bowling(score):
    total = 0
    frame = 1
    prev_frame_score = 0
    for char in score:
        if char.isdigit():
            total += int(char)
            if frame < 10 and len(score) - len(score.rstrip('0123456789/')) > 1:
                total += (10 - prev_frame_score)
            prev_frame_score = int(char)
        elif char == '/':
            total += 10 - int(score[score.index(char) - 1])
            frame += 1
            prev_frame_score = 0
        elif char == 'X':
            total += 10
            frame += 1
            prev_frame_score = 0
        else:
            first_roll = int(score[:1])
            second_roll = 10 - first_roll
            if score[1] != '/':
                total += first_roll + second_roll
                frame += 1
                prev_frame_score = 0
    return total