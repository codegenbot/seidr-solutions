def bowling_score(game):
    score = 0
    rolls = game.split("/")
    for i in range(10):
        if rolls[i] == "X":
            score += 30
        elif len(rolls[i]) > 1:
            first_roll, second_roll = map(int, rolls[i])
            if first_roll + second_roll == 10:
                score += first_roll + 10
            else:
                score += first_roll + second_roll
        else:
            roll = int(rolls[i])
            if i < 8 and (roll == 0 or all(int(x) <= roll for x in rolls[8:])):
                if i < 9:
                    score += 10 + int(rolls[i + 1])
                else:
                    score += 10
            else:
                score += roll
    return score