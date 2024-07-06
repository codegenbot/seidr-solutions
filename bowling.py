```
def bowling_score(game):
    score = 0
    roll = []
    for char in game:
        if char.isdigit():
            roll.append(int(char))
        elif char == '/':
            while len(roll) < 2 or (len(roll) == 2 and roll[-1] != 10):
                score += 10 - sum(roll)
                roll = []
        elif char in 'Xx':
            if len(roll) > 0:
                score += 10 + sum(roll)
                roll = []
            else:
                score += 30
    for i in range(len(roll)):
        score += roll[i]
    return score