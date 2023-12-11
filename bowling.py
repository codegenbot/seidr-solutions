def get_bowling_score(bowl_string):
    total_score = 0
    for i in range(len(bowl_string)):
        if bowl_string[i] == "X":
            total_score += 10
        elif bowl_string[i] == "/":
            total_score += 10 - int(bowl_string[i-1])
        else:
            total_score += int(bowl_string[i])
    return total_score