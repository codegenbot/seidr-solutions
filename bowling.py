def bowling_score(bowling_input):
    score = 0
    roll = []
    for char in bowling_input:
        if char.isdigit():
            roll.append(int(char))
        elif char == "/":
            if len(roll) < 2:
                return "Invalid Input"
            frame = sum(roll[:-1])
            if roll[-1] == 10:
                score += 10 + frame
            else:
                score += min(10, roll[-1]) + frame
            roll = []
    if len(roll) > 0:
        if len(roll) < 2:
            return "Invalid Input"
        frame = sum(roll[:-1])
        score += min(10, roll[-1]) + frame
    return score