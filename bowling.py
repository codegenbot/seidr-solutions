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
            second_roll = int(game[frame_index + 1])
            if game[frame_index] == '/':
                strike = True
            elif game[frame_index + 1] == '/':
                first_roll, second_roll = second_roll, first_roll
            if strike:
                score += 10 + first_roll + second_roll
                frame_index += 2
            else:
                score += first_roll + second_roll
                frame_index += 2
    return score