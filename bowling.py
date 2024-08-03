Here is the solution:

def bowling_score(games):
    score = 0
    game = ""
    for char in games:
        if char.isdigit():
            game += char
        else:
            if game == "X":
                score += 30
            elif len(game) == 2 and int(game[0]) * 10 + int(game[1]) == 10:
                score += 10
            else:
                score += sum(int(x) for x in game)
            game = ""
    if game != "":
        if game == "X":
            score += 30
        elif len(game) == 2 and int(game[0]) * 10 + int(game[1]) == 10:
            score += 10
        else:
            score += sum(int(x) for x in game)
    return score