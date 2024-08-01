```
def bowling(score_str):
    score = 0
    frame_score = 0
    roll_count = 0
    for i in range(len(score_str)):
        if score_str[i] == 'X':
            if i % 2 == 1:
                score += max(10 - int(score_str[:i].split('/')[1]), 0) + 10
            else:
                frame_score += 20
        elif score_str[i] in '/':
            first_roll = int(score_str[:i].split('/')[0])
            second_roll = int(score_str[i+1:].split('/')[0])
            if i % 2 == 1:
                score += first_roll + second_roll
            else:
                frame_score += first_roll + second_roll
        elif score_str[i] in '123456789':
            roll_count += 1
    while roll_count < 10:
        if roll_count < 9 and (score_str[roll_count*2].isdigit() or score_str[roll_count*2+1] == '/'):
            first_roll = int(score_str[roll_count*2:roll_count*2+2])
            second_roll = int(score_str[roll_count*2+2:].split('/')[0])
            if roll_count < 8:
                score += first_roll + second_roll
            else:
                frame_score += max(10 - int(score_str[:i].split('/')[1]), 0) + second_roll
        elif score_str[roll_count*2].isdigit():
            score += int(score_str[roll_count*2:roll_count*2+3])
            roll_count += 1
    return score