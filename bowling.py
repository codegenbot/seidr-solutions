```
def bowling_score(game):
    score = 0
    for i in range(10):
        if game[i].isdigit():
            strike = False
            spare = False
            frame_score = 0
            j = i
            while j < 10:
                if game[j] == 'X':
                    strike = True
                    j += 1
                    break
                elif game[j] == '/':
                    spare = True
                    j += 1
                    break
                else:
                    frame_score += int(game[j])
                    j += 1
            if not strike and not spare:
                score += frame_score
        else:
            score += int(game[i].replace('/', ''))
    return score