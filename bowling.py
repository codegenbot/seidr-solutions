def bowling(score_string):
    score = 0
    frame = 1
    prev_score = 0

    for char in score_string + '/': 
        if char == "X":
            score += 10
            frame += 1
        elif char.isdigit():
            score += int(char)
            if frame < 10:
                prev_score = int(char) 
        elif char == "/":
            score += 10 - prev_score
            frame += 1
            prev_score = 0
        else: 
            if frame == 10 and char.isdigit():
                score += int(char)
            else:
                while char != "/": 
                    if char == "X":
                        score += 10
                        frame += 1
                        break
                    elif char.isdigit():
                        score += int(char) + prev_score
                        prev_score = 0
                        frame += 1
                        break
        if char == '/':
            break

    return score