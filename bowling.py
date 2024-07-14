```
def bowling_score(bowling_game):
    score = 0
    game = [int(x) for x in ''.join(filter(str.isdigit, bowling_game))]
    for i in range(0, len(game), 2):
        if game[i] + game[i+1] == 10:
            if i < 8:
                score += 10 + sum(game[i+2:i+4])
            else:
                score += 10
        elif game[i] >= 10:
            score += 10
            game = game[:i] + [x-10 for x in game[i:]]
        else:
            score += game[i] + game[i+1]
    return score

if __name__ == "__main__":
    print(bowling_score("7-3-5-X--4-8/6-7-2-0-X"))