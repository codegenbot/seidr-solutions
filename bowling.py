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
            first_roll = int(game[frame_index].strip())
            second_roll = int(game[frame_index + 1].strip())
            if game[frame_index + 1] == '/':
                strike = True
            elif game[frame_index + 2] == '/':
                pass
            else:
                third_roll = int(game[frame_index + 2].strip())
                first_roll, second_roll = map(int, game[frame_index:frame_index+3].split(' '))

            if strike:
                score += 10 + first_roll
                frame_index += 2
            elif first_roll == 10:
                score += 10 + second_roll + third_roll if third_roll else 10 + second_roll
                frame_index += 3
            else:
                score += first_roll + second_roll
                frame_index += 2
    return score