```
def bowling(score):
    score = score.replace('/', '')
    total_score = 0
    frame_score = 0
    for i in range(len(score)):
        if score[i].isdigit():
            if score[i] == 'X':
                frame_score += 10
            elif score[i] == '7' or score[i] == '8' or score[i] == '9':
                if len(score) - i > 1 and score[i+1].isdigit() and int(score[i+1]) < 10:
                    frame_score += int(score[i]) + int(score[i+1])
                else:
                    frame_score += int(score[i]) + 3
            elif score[i] == '0':
                if len(score) - i > 1 and score[i+1].isdigit() and int(score[i+1]) < 10:
                    frame_score += 10
                else:
                    frame_score = 10
            else:
                frame_score += int(score[i])
        else:
            if score[i] == '-':
                total_score += frame_score
                frame_score = 0
    total_score += frame_score
    return total_score