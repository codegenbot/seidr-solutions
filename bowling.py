```
def bowling_score(game):
    score = 0
    frame_index = 0
    for i in range(10):
        if game[frame_index:frame_index+2].isdigit():
            if len(game[frame_index:frame_index+2]) == 3:
                if game[frame_index+1] == '/':
                    score += int(game[frame_index])
                else:
                    score += int(game[frame_index:frame_index+2])
                frame_index += 2
            else:
                score += int(game[frame_index:frame_index+1])
                frame_index += 1
        else:
            if game[frame_index] == 'X':
                score += 10
                frame_index += 1
            elif game[frame_index:frame_index+1].isdigit() and game[frame_index+1] == '/':
                score += int(game[frame_index]) + 10
                frame_index += 2
            else:
                strikes = 0
                while game[frame_index:frame_index+1].isdigit():
                    if game[frame_index] == 'X':
                        score += 10
                        strikes += 1
                        frame_index += 1
                    elif game[frame_index:frame_index+1].isdigit() and game[frame_index+1] == '/':
                        score += int(game[frame_index]) + 10
                        frame_index += 2
                    else:
                        score += int(game[frame_index:frame_index+1])
                        frame_index += 1
                if strikes == 2:
                    score += 10
    return score