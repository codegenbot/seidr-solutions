Here is the solution:

def bowling_score(game):
    score = 0
    rolls = list(map(int, game.replace('/', '')))
    for i in range(10):
        if i < len(rolls) and rolls[i] == 10:
            score += 10 + (i+1)*10
            rolls = rolls[:i] + rolls[i+1:]
        elif i < len(rolls):
            first_roll = rolls[i]
            if i+1 < len(rolls) and rolls[i+1] + rolls[i] == 10:
                score += 10
                rolls = rolls[:i] + rolls[i+2:]
            else:
                score += first_roll + (10 - first_roll if first_roll < 10 else 0)
    return score