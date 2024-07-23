Here is a Python function that solves the problem:

def bowling_score(s):
    score = 0
    roll = []
    for char in s:
        if char.isdigit():
            roll.append(int(char))
        elif char == '/':
            if len(roll) < 2:
                return 0
            strike = sum(roll)
            score += strike
            roll = []
        elif char == 'X':
            if len(roll) != 1:
                return 0
            strike = 10 + sum(roll)
            score += strike
            roll = []
    if len(roll) > 2:
        return 0
    if len(roll) == 1:
        score += roll[0]
    elif len(roll) == 2:
        score += sum(roll)
    return score