```
def bowling(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while frame <= len(score) // 2:
        if score[frame*2-1:frame*2+1] == 'X':
            if frame < len(score) // 2:
                if score[frame*2+1:frame*2+2] != 'X' and score[frame*2+1:frame*2+2] != '-':
                    total_score += 10 + int(score[frame*2+1:frame*2+3])
                else:
                    total_score += 10 + 10
            else:
                total_score += 10 + 10
            frame += 1
        elif score[frame*2-1:frame*2] == 'X':
            if frame < len(score) // 2 - 1:
                if score[frame*2+1:frame*2+2] != 'X' and score[frame*2+1:frame*2+2] != '-':
                    total_score += 10 + int(score[frame*2+1:frame*2+3])
                else:
                    total_score += 10 + 10
            else:
                total_score += 10 + 10
            frame += 2
        else:
            if score[frame*2-1:frame*2] == 'X':
                total_score += 10
                if frame < len(score) // 2 - 1:
                    total_score += int(score[frame*2+1:frame*2+2])
                elif frame < len(score) // 2:
                    total_score += int(score[frame*2+1:frame*2+3])
            else:
                first_roll = int(score[frame*2-1:frame*2])
                second_roll = int(score[frame*2:frame*2+1])
                total_score += first_roll + second_roll
            frame += 1
    return total_score