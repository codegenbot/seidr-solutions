```
def bowling_score(game):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if game[frame_index] == 'X':
            score += 10 + (10 - i) * 10
            frame_index += 2
        elif game[frame_index: frame_index+2] == 'XX':
            score += 20
            frame_index += 2
        else:
            strike = False
            first_roll = int(game[frame_index])
            second_roll = int(game[frame_index + 1].split('/')[0])
            if game[frame_index + 1].split('/')[1] == 'X':
                third_roll = 10
            elif game[frame_index + 2].split('/')[0] != '/':
                first, second = map(int, game[frame_index + 1].split('/')[0] + game[frame_index + 2].split('/')[0])
                if game[frame_index + 2].split('/')[1] == 'X':
                    third_roll = 10
                else:
                    third_roll = int(game[frame_index + 2].split('/')[1])
            else:
                strike = True
            if strike:
                score += 10 + first_roll + second_roll
                frame_index += 3
            elif game[frame_index + 1] == '0':
                score += first_roll * 2
                frame_index += 2
            else:
                score += first_roll + second_roll
                frame_index += 2
    return score