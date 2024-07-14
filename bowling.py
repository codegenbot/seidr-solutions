```
def bowling_score(bowling_game):
    score = 0
    game = [int(x) for x in ''.join(filter(str.isdigit, bowling_game))]
    for i in range(10):
        if len(game) > i:
            if game[i] == 10:
                score += 10 + (sum(game[i+1:i+3]) if i < 8 else 0)
            elif sum(game[i:i+2]) >= 10:
                score += 10
                game = game[:i] + [x-10 for x in game[i:]]
            else:
                score += game[i]
    return score

if __name__ == "__main__":
    print(bowling_score("7-3-5-X--4-8/6-7-2-0-X"))