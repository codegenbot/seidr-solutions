```
def bowling_score(bowling_game):
    score = 0
    frame = 1
    roll = [int(x) for x in re.sub('[X-]', '10', bowling_game).split('/')]
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += roll[i]
            frame += 1
        elif roll[i] + roll[i+1] == 10:
            score += roll[i] + 10
            frame += 1
        else:
            score += sum(roll[i:i+2])
            frame += 1
    return score