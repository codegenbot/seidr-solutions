def bowling(score_string):
    score = 0
    frame = 1
    for char in score_string:
        if char.isdigit():
            score += int(char)
        elif char == "/":
            score += 10 - (frame - 1)
            frame += 1
        elif char == "X":
            score += 10
            frame += 1
        else:
            strikes = 0
            while char != "/":
                if char == "X":
                    score += 10
                    strikes += 1
                else:
                    score += int(char)
                char = next(score_string)
            if strikes == 2:
                score += 10 - (frame - 1)
    return score