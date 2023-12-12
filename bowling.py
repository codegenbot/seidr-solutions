def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    in_first_half = True
    bowls += '-' * (21 - len(bowls))

    for i in range(len(bowls)):
        bowl = bowls[i]
        if bowl == 'X':
            score += 10
            if frame < 10:
                if bowls[i+2] == 'X':
                    score += 20
                else:
                    score += int(bowls[i+1]) + int(bowls[i+2])
            frame += 1
        elif bowl == '/':
            score += 10 - frame_score
            if frame < 10:
                score += int(bowls[i+1])
            frame += 1
        elif bowl == '-':
            pass
        else:
            score += int(bowl)
            frame_score = int(bowl)
            if not in_first_half:
                frame += 1
            in_first_half = not in_first_half

    return score

bowls = input()
print(calculate_score(bowls))