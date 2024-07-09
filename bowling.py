```
def bowling_score(game):
    score = 0
    roll = 0
    for i, frame in enumerate(game.split('/')):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first, second = map(int, frame)
            score += first + second
            roll += 1
        else:
            first, second = map(int, frame[:2])
            score += first + second
            if first + second == 10:
                roll += 1
                if i < len(game.split('/')) - 1 and len(game.split('/')[i+1]) > 1:
                    score += next(iter(map(int, game.split('/')[i+1].split('/')[0]))) or 10
                else:
                    score += 10
            else:
                try:
                    third = int(frame[2])
                    score += third
                    roll += 1
                except ValueError:
                    if i < len(game.split('/')) - 1 and len(game.split('/')[i+1]) > 1:
                        next_frame = game.split('/')[i+1].split('/')
                        if len(next_frame[0]) == 2:
                            score += 10 + next(iter(map(int, next_frame[0])))
                        elif len(next_frame[0]) == 1:
                            score += 10 + int(next_frame[0])
                    if i < len(game.split('/')) - 2 and len(game.split('/')[i+2]) > 1:
                        next_next_frame = game.split('/')[i+2].split('/')
                        if len(next_next_frame[0]) == 2:
                            score += 10 + next(iter(map(int, next_next_frame[0])))
                        elif len(next_next_frame[0]) == 1:
                            score += 10 + int(next_next_frame[0])
    return score