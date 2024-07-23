def bowling_score(bowling_string):
    score = 0
    frame = 1
    for bowl in bowling_string:
        if bowl.isdigit():
            score += int(bowl)
        elif bowl == "X":
            score += 10
            frame -= 1
        elif bowl == "/":
            continue
        else:
            score += 10 - int(bowl)
            frame -= 1
    return score