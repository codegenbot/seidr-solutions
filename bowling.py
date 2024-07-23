```
def bowling_score(game):
    score = 0
    frames = game.split('/')
    for i in range(len(frames)):
        if 'X' == frames[i]:
            if i < len(frames) - 1:
                score += 10 + sum(map(int, frames[i+1:i+3]))
            else:
                score += 10
        elif '-' in frames[i]:
            first_roll, second_roll = map(int, frames[i].split('-'))
            score += first_roll + second_roll
            if i < len(frames) - 1 and int(frames[i+1]) != '0':
                score += int(frames[i+1])
        else:
            score += int(frames[i])
    return score

print(bowling_score('9/-39/X3/7/54622325'))