```
def bowling_game(score_str):
    score = 0
    roll = 0
    frame_scores = []
    for i in range(10):
        if '/' in score_str[roll:roll+3]:
            strike = False
            if score_str[roll] == 'X':
                strike = True
            else:
                spare = False
                if int(score_str[roll]) + int(score_str[roll+1]) >= 10:
                    spare = True
            roll += 3
            if not strike and not spare:
                frame_scores.append(10 - (int(score_str[roll-1]) + int(score_str[roll-2])))
        elif score_str[roll:roll+2] == 'XX' or score_str[roll:roll+2].startswith('9X'):
            roll += 3
        else:
            if int(score_str[roll:roll+2]) > 10:
                frame_scores.append(10)
            else:
                frame_scores.append(int(score_str[roll:roll+2]))
            roll += 2
    for i in range(len(frame_scores)):
        score += frame_scores[i]
    return score