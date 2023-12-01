def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    bonus = False
    bonus_count = 0

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if bonus:
                score += 10
                bonus_count -= 1
            if frame == 10:
                bonus = True
                bonus_count = 2
            frame_score = 0
            frame += 1
        elif bowl == '/':
            score += 10 - frame_score
            if bonus:
                score += 10 - frame_score
                bonus_count -= 1
            if frame == 10:
                bonus = True
                bonus_count = 1
            frame_score = 0
            frame += 1
        elif bowl == '-':
            frame_score += 0
        else:
            score += int(bowl)
            frame_score += int(bowl)
            if bonus:
                score += int(bowl)
                bonus_count -= 1
            if frame == 10:
                bonus = True
                bonus_count = 0
            if frame_score == 10:
                bonus = True
                bonus_count = 1
        if bonus_count == 0:
            bonus = False

    return score