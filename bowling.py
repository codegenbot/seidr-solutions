def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame_score = 10
                is_strike = True
            else:
                frame_score += 10
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                frame_score = 10
                is_spare = True
            else:
                frame_score += 10 - frame_score
        elif bowl == '-':
            if frame < 10:
                frame_score = 0
            else:
                frame_score += 0
        else:
            try:
                score += int(bowl)
                if frame < 10:
                    frame_score += int(bowl)
                else:
                    frame_score += int(bowl)
            except ValueError:
                pass
        if is_strike:
            score += int(bowl)
            frame_score += int(bowl)
            is_strike = False
        if is_spare:
            score += int(bowl)
            frame_score += int(bowl)
            is_spare = False
        if frame < 10 and (bowl == 'X' or bowl == '/'):
            frame += 1
        elif frame == 10 and (bowl == 'X' or bowl == '/' or bowl == '-'):
            frame_score = 0
    return score

bowls = input().strip()
print(calculate_score(bowls))