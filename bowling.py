```
def bowling_score(game):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if game[frame_index:frame_index+2] == 'X ':
            score += 10 + (10 - i) * 10
            frame_index += 2
        elif game[frame_index:frame_index+3] == 'XX ':
            score += 20
            frame_index += 2
        else:
            strike = False
            for j in range(1, 4):
                if game[frame_index + j - 1] != '/':
                    if j == 1:
                        first_roll = int(game[frame_index + j - 1])
                    elif j == 2:
                        second_roll = int(game[frame_index + j - 1])
                else:
                    strike = True
                    break
            if strike:
                score += 10 + first_roll + (second_roll if j == 3 else 0)
                frame_index += 2
            else:
                score += first_roll + second_roll
                frame_index += 2
    return score