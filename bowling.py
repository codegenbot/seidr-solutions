def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 30
                i += 1
            elif i < len(frames):
                second_roll = int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
                score += second_roll
                i += 2
        elif frames[i] == '/':
            score += 10
            i += 1
            if i < len(frames) and ''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()):
                score += int(''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()))
                i += 2
        else:
            first_roll = int(''.join(c for c in frames[i].replace(" ", "") if c.isdigit()))
            if i < len(frames) - 1 and frames[i+1] == 'X':
                second_roll = 10
                score += first_roll + second_roll
                i += 2
            elif i < len(frames) - 1 and ''.join(c for c in frames[i+2].replace(" ", "") if c.isdigit()):
                second_roll = int(''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit())) + int(''.join(c for c in frames[i+2].replace(" ", "") if c.isdigit()))
                if second_roll == 10:
                    score += first_roll + 10
                else:
                    score += first_roll + second_roll
                i += 3
            else:
                if i < len(frames) - 1 and ''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()):
                    second_roll = int(''.join(c for c in frames[i+1].replace(" ", "") if c.isdigit()))
                    if first_roll + second_roll == 10:
                        score += 10
                    else:
                        score += first_roll + second_roll
                    i += 2
                else:
                    score += first_roll
                    i += 1

    return score