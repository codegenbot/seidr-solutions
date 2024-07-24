```
def bowling_score(input_string):
    score = 0
    roll = [0] * 10
    for i in range(0, len(input_string), 2):
        if input_string[i].isdigit():
            roll[9 - i // 2] = int(input_string[i])
            if i < 17:
                roll[9 - (i + 1) // 2] = int(input_string[i + 1])
    for i in range(10):
        if roll[i]:
            if roll[i] == 10:
                score += 10 + roll[(i + 1) % 10]
            elif sum(roll[max(0, i - 1):min(i + 2, 10)]) >= roll[i]:
                score += roll[i] * 2
            else:
                score += roll[i] + max(sum(roll[:i]), 0)
    return score