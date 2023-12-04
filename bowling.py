def get_bowling_score(input_string):
    score = 0
    for i in range(len(input_string)):
        if input_string[i] == "X":
            score += 10
        elif input_string[i] == "/":
            score += 10 - int(input_string[i-1])
        else:
            score += int(input_string[i])
    return score
