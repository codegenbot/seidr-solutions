def bowling_score(game):
    frames = game.replace('/', '').split(' ')
    score = 0
    roll_index = 0
    while roll_index < len(frames):
        if frames[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif frames[roll_index] == '-':
            first_roll, second_roll = map(int, frames[roll_index].split('-'))
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
            roll_index += 2
        else:
            first_roll = int(frames[roll_index])
            if roll_index < len(frames) - 1 and sum(map(int, frames[roll_index:roll_index+2])) == 10:
                second_roll = int(frames[roll_index+1])
                score += first_roll + second_roll
                roll_index += 2
            else:
                if roll_index < len(frames) - 1 and int(frames[roll_index]) + int(frames[roll_index+1]) >= 10:
                    second_roll = int(frames[roll_index+1])
                    score += first_roll + second_roll
                else:
                    score += first_roll
                roll_index += 1
    return score