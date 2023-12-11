import sys

def bowling_score(round):
    score = 0
    frame = 1
    i = 0
    while i < len(round):
        if frame > 10:
            break
        
        if round[i] == 'X':
            score += 10
            score += calculate_strike_bonus(round[i+1:i+3])
            i += 1
            frame += 1
        elif round[i] == '/':
            score += calculate_spare_bonus(round[i-1], round[i+1])
            i += 1
            frame += 1
        elif round[i] == '-':
            score += 0
        else:
            score += int(round[i])
            
        i += 1
        
    return score

def calculate_strike_bonus(bonuses):
    bonus_score = 0
    for bonus in bonuses:
        if bonus == 'X':
            bonus_score += 10
        elif bonus == '-':
            bonus_score += 0
        else:
            bonus_score += int(bonus)
            
    return bonus_score

def calculate_spare_bonus(prev, bonus):
    if bonus == 'X':
        return 10
    elif bonus == '-':
        return 0
    else:
        return 10 - int(prev)
    
round = sys.stdin.readline().strip()
print(bowling_score(round))