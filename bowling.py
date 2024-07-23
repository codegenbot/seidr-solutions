def calculate_score(bowls):
    mapping = {'X': 10, '/': 10, '-': 0}
    total_score = 0
    index = 0
    
    for frame in range(10):
        first_bowl = bowls[index]
        
        if first_bowl in mapping:
            total_score += mapping[first_bowl]
            if first_bowl == 'X':
                total_score += get_strike_bonus(bowls, index)
            elif first_bowl == '/':
                total_score += mapping[bowls[index + 1]]
                
        else:
            total_score += int(first_bowl) + int(bowls[index + 1])
        
        index += 1 if first_bowl == 'X' else 2
    
    return total_score

print(calculate_score("6121X617-X-9621-8/2"))