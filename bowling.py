```
def bowling_score(bowling_game):
    score = 0
    game = [int(x) for x in ''.join(filter(str.isdigit, bowling_game))]
    frame = 1
    while frame <= 10:
        if len(game) > frame*2 - 1:
            if game[frame*2-1] == 10:
                score += 10 + sum(game[frame*2:frame*2+2])
                frame += 1
            elif game[frame*2-1]+game[frame*2] >= 10:
                score += 10
                game = game[:frame*2] + [x-10 for x in game[frame*2:]]
                if len(game) > frame*2 - 1 and game[-1] == 10:
                    score += 10
                frame += 1
            else:
                score += sum(game[frame*2:frame*2+2])
                frame += 2
        else:
            score += sum(game[:frame*2])
            break

    return score


if __name__ == "__main__":
    print(bowling_score("7-3-5-X--4-8/6-7-2-0-X"))