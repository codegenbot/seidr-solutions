Here is the solution:

def bowling_score(s):
    score = 0
    roll = []
    for char in s:
        if char.isdigit():
            roll.append(int(char))
        else:
            if len(roll) >= 1 and (len(roll) == 2 or (len(roll) > 2 and sum(roll) < 10)):
                score += sum(roll)
                roll = []
    if len(roll) >= 1:
        score += sum(roll)
    return score