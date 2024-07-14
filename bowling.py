```
def bowling_score(game):
    score = 0
    rolls = list(map(int, re.sub('[/-]', '', game)))
    for i in range(10):
        if len(rolls) < i + 1:
            break
        if rolls[i] == 10:
            score += 10
            rolls.pop(i)
        else:
            frame_score = sum(rolls[:3])
            rolls.pop(0)
            rolls.pop(0)
            if len(rolls) > 0 and rolls[0] + rolls[1] == 10:
                rolls.pop(0)
                score += frame_score + rolls[0]
            else:
                score += frame_score
    return score