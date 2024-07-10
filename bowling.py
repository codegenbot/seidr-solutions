```
def bowling_score(games):
    score = 0
    game = ''
    for char in games:
        if char.isdigit():
            game += char
        else:
            if len(game) == 1:
                score += int(game)
            elif len(game) > 1 and sum(map(int, game)) <= 10:
                score += sum(map(int, game))
            else:
                first = int(game[:1])
                second = int(game[1:])
                if first + second == 10:
                    score += 10
                else:
                    score += first + second
            game = ''
    if len(game) > 0:
        if len(game) == 1:
            score += int(game)
        elif len(game) > 1 and sum(map(int, game)) <= 10:
            score += sum(map(int, game))
        else:
            first = int(game[:1])
            second = int(game[1:])
            if first + second == 10:
                score += 10
            else:
                score += first + second
    return score