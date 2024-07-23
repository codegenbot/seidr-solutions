def bowling_score(game):
    frames = game.split('/')
    score = 0
    for i in range(len(frames)):
        if '-' in frames[i]:
            first_roll, second_roll = map(int, frames[i].split('-'))
            if first_roll + second_roll == 10:
                score += 10 + sum(map(int, frames[i+1:i+3]))
            else:
                score += first_roll + second_roll
        elif 'X' in frames[i]:
            score += 10 + sum(map(int, frames[i+1:]))
        elif frames[i] == '0':
            score += 0
        else:
            score += int(frames[i])
    return score