def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            strike = int(char) == 10
            spare = False
            while True:
                if char.isdigit():
                    if strike:
                        score += 10 + 10 + int(char)
                        break
                    elif int(char) + (10 - int(char)) <= 10:
                        score += 10 - int(char) + int(char)
                        break
                    else:
                        score += 10
                        spare = True
                        break
                elif char == '/':
                    if strike:
                        score += 10 + 10
                        break
                    elif not spare:
                        score += 10 - (int(frames[frames.index(char) - 1]) + int(frames[frames.index(char) + 1]))
                        break
                    else:
                        score += 10
                        break
                frame += 1
        elif char == '/':
            if strike:
                score += 20
            else:
                score += 10
            frame += 1
    return score