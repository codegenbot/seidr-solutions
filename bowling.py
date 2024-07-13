```
def bowling_score(frames):
    score = 0
    frame = 1
    for roll in frames:
        if roll == 'X':
            score += 30
            frame -= 1
        elif re.match('^[1-9]/[1-9]', roll):
            first_roll, second_roll = map(int, roll.split('/'))
            score += first_roll + second_roll
            frame -= 1
        else:
            if frame < 10:
                for i in range(2):
                    if roll[i] == 'X':
                        score += 10 + (i * 10)
                        frame -= 1
                        break
                    elif roll[i] == '/':
                        first_roll, second_roll = map(int, roll[:i].split('/'))
                        score += first_roll
                        frame -= 1
                        break
            else:
                for i in range(2):
                    if roll[i] == 'X':
                        score += 10 + (i * 10)
                        frame -= 1
                        break
    return score