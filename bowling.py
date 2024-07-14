```
def bowling_score(bowling_game):
    score = 0
    game = [int(x) for x in ''.join(filter(str.isdigit, bowling_game))]
    for i in range(0, len(game), 2):
        if sum([game[i], game[i+1]]) == 10:
            if i < 18:
                score += 10 + sum(game[i+2:i+4])
            else:
                score += 10
        elif game[i] >= 5:
            score += 10
            for j in range(i, len(game), 2):
                game[j] -= 10
        else:
            score += sum([game[i], game[i+1]])
    return score

if __name__ == "__main__":
    print(bowling_score("7-3-5-X--4-8/6-7-2-0-X"))