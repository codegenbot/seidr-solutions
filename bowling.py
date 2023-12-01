def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_spare = False
    is_strike = False

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame_score = 10
                is_strike = True
            else:
                frame_score += 10
        elif bowl == '/':
            score += (10 - frame_score)
            if frame < 10:
                frame_score = 10
                is_spare = True
            else:
                frame_score += (10 - frame_score)
        elif bowl == '-':
            frame_score += 0
        else:
            score += int(bowl)
            frame_score += int(bowl)

        if is_spare or is_strike:
            score += int(bowl)

        if is_spare:
            is_spare = False

        if is_strike:
            frame += 1
            is_strike = False

        if frame < 10 and frame_score == 10:
            frame += 1
            frame_score = 0

    return score

bowls = input().strip()
print(calculate_bowling_score(bowls))