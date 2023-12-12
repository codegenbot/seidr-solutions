def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    in_first_half = True

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                score += 10
            if in_first_half:
                in_first_half = False
            else:
                frame += 1
                in_first_half = True
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                score += 10
            frame += 1
            in_first_half = True
        elif bowl == '-':
            if in_first_half:
                in_first_half = False
            else:
                frame += 1
                in_first_half = True
        else:
            score += int(bowl)
            frame_score = int(bowl)
            if in_first_half:
                in_first_half = False
            else:
                frame += 1
                in_first_half = True

    return score

bowls = input()
print(calculate_score(bowls))