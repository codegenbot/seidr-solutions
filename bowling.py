```
def bowling_score(input_str):
    score = 0
    frame = 1
    for i in range(0, len(input_str), 2):
        if input_str[i] == 'X':
            score += 10 + (10 - int(input_str[i+1]) if i < len(input_str) - 1 else 10)
        elif input_str[i] == '/':
            score += 10 - int(input_str[i+1])
        else:
            score += 10 - int(input_str[i])
        frame -= 1
    return score