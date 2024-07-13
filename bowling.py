```
def bowling_score(game):
    game = game.rstrip()
    score = 0
    i = len(game) - 1

    while i >= 0:
        if game[i] == "X":
            if i > 0 and game[i-1].isdigit() and int(game[i-1]) + 10 <= 10:
                bonus = int(game[i-1])
                score += 10
                i -= 2
            else:
                score += 10
                i -= 1
        elif game[i] == "-":
            frame_score = sum(int(x) for x in reversed([c for c in game[i+1:i+4][::-1] if c.isdigit()]))
            score += frame_score
            i -= 3
        else:
            first_roll = int(game[i])
            if i > 0 and game[i-1].isdigit():
                second_roll = int(game[i-1])
            else:
                second_roll = 0

            score += first_roll + second_roll
            i -= 2

    return score

print(bowling_score("X1-1681357-0/XX7/4"))