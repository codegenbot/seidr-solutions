```
def bowling_score(game):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if game[frame_index] == 'X':
            score += 10 + (10 - i) * 10
            frame_index += 2
        elif game[frame_index: frame_index+2].count('X') == 2:
            score += 20
            frame_index += 2
        else:
            strike = False
            first_roll = int(game[frame_index])
            second_roll = int(game[frame_index + 1])
            if game[frame_index] == '/':
                strike = True
            elif game[frame_index + 1] == '/':
                pass
            elif game[frame_index] == 'X' or (game[frame_index] != '/' and game[frame_index + 1] != '/'):
                score += first_roll + second_roll
                frame_index += 2
            else:
                score += first_roll
                frame_index += 1
                if game[frame_index] != '/':
                    score += int(game[frame_index])
                    frame_index += 1
    return score