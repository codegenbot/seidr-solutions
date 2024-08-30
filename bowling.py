def bowling_game(input_string):
    score = 0
    roll = []
    for char in input_string:
        if char.isdigit():
            roll.append(int(char))
        elif char == "/":
            if len(roll) < 2:
                return "Invalid game string"
            total_pins = sum(roll)
            if total_pins < 10:
                return "Invalid game string"
            score += max(10 - total_pins, 0) * 10
            roll = []
    if len(roll) > 0:
        return "Invalid game string"
    total_pins = sum(roll)
    score += min(total_pins, 10) * 10
    return score