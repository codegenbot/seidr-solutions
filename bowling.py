def calculate_score(bowls):
    total_score = 0
    index = 0
    
    for frame in range(10):
        if bowls[index] == "X":
            total_score += 10 + get_strike_bonus(bowls, index)
            index += 1
        elif bowls[index + 1] == "/":
            total_score += 10 + int(bowls[index + 2])
            index += 2
        else:
            if bowls[index] != "-":
                total_score += int(bowls[index])
            if bowls[index + 1] != "-":
                total_score += int(bowls[index + 1])
            index += 2
            
    return total_score

print(calculate_score("6121X617-X-9621-8/2"))