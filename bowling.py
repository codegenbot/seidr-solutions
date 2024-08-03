```
def bowling_score(game):
    score = 0
    rolls = [int(x) for x in re.findall(r'\d+', game)]
    frames = 0
    while len(rolls) > 1:
        if rolls[0] == 10:  # strike
            score += 10 + 10 + rolls.pop(2)
            rolls.pop(0)
            rolls.pop(0)
        elif rolls[0] + rolls[1] >= 10:  # spare
            score += 10 + rolls.pop(2)
            frames += 1
            rolls = [x for x in rolls if x > 0]
        else:
            score += sum(rolls[:2])
            rolls = rolls[2:]
        frames += 1
    while len(rolls):
        score += sum(rolls)
        rolls = []
    return score