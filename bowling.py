def calculate_score(bowling_round):
    score = 0
    frame = 1
    i = 0
    
    while frame <= 10:
        if bowling_round[i] == 'X':
            score += 10 + get_strike_bonus(bowling_round, i)
            i += 1
        elif bowling_round[i] == '/':
            score += 10 + get_spare_bonus(bowling_round, i)
            i += 2
        else:
            score += int(bowling_round[i])
            if bowling_round[i+1] == '/':
                score += get_spare_bonus(bowling_round, i+1)
            i += 2
        
        frame += 1
    
    return score

def get_strike_bonus(bowling_round, index):
    bonus = 0
    if bowling_round[index+1] == 'X':
        bonus += 10
        if bowling_round[index+2] == 'X':
            bonus += 10
        else:
            bonus += int(bowling_round[index+2])
    else:
        bonus += int(bowling_round[index+1])
        if bowling_round[index+2] == '/':
            bonus += 10 - int(bowling_round[index+1])
        else:
            bonus += int(bowling_round[index+2])
    
    return bonus

def get_spare_bonus(bowling_round, index):
    bonus = 0
    if bowling_round[index+1] == 'X':
        bonus += 10
    else:
        bonus += int(bowling_round[index+1])
    
    return bonus

bowling_round = input()
print(calculate_score(bowling_round))