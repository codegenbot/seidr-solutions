def calculate_score(bowling_string):
    score = 0
    frame = 1
    roll = 0

    while frame <= 10:
        if bowling_string[roll] != "-":
            if roll < 1:
                score += int(bowling_string[roll])
            elif roll == 1:
                if bowling_string[roll - 1 : roll + 1] == "X":
                    score += 30
                else:
                    score += 10 + int(bowling_string[roll])
            else:
                if bowling_string[roll - 2 : roll] == "X":
                    score += 20
                elif bowling_string[roll - 1 : roll] == "/":
                    score += 10 + int(bowling_string[:roll].count("X"))
                else:
                    score += 10 + int(bowling_string[roll - 1])
        frame += bowling_string[roll] != "/"
        roll += 1

    return score