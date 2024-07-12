def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 2 and frame[1] == 'X':
            strike = True
            spare = False
        elif '-' in frame:
            roll1, roll2 = map(int, frame.split('-'))
            score += roll1 + roll2
            strike = False
            spare = False
        elif int(frame) == 10:
            roll = [int(frame)]
            score += 10
            strike = True
            spare = False
        else:
            roll = list(map(int, frame))
            if sum(roll) < 10:
                score += sum(roll)
                strike = False
                spare = False
            elif len(roll) == 2:
                score += 10
                strike = True
                spare = False
            else:
                score += 10 + roll[1]
                strike = False
                spare = True
        if strike:
            while len(roll) < 2 and frame != 'X':
                extra_roll = int(input(f"After the {score}th strike, what did you knock down? '))
                roll.append(extra_roll)
                score += extra_roll
        elif spare:
            extra_roll = int(input(f"After the {score}th spare, what did you knock down? ''))
            score += extra_roll
    return score