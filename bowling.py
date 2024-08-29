```
def bowling_score(game):
    score = 0
    frame_num = 1
    for bowl in game:
        if bowl == 'X':  # strike
            score += 10 + (10 * frame_num)
            frame_num += 1
        elif bowl == '/':
            first_bowl = int(game[game.index(bowl) - 1])
            second_bowl = 10 - first_bowl
            score += first_bowl + second_bowl
            frame_num += 1
        else:
            if frame_num < 10: 
                if len(bowls_to_score(frame_num)) == 2:
                    first_bowl = int(bowl)
                    second_bowl = 10 - first_bowl
                    score += first_bowl + second_bowl
                elif bowl != '0':
                    score += int(bowl)                    
            frame_num += 1    
    return score

def bowls_to_score(frame):
    result = []
    for i in range(1, frame+1):
        if game[i*10-1] == 'X' or game[(i*10)+9] == '/':
            result.append('X')
        else:
            first_bowl = int(game[(i*10)-1])
            second_bowl = 10 - first_bowl
            result.extend([str(first_bowl), str(second_bowl)])
    return result