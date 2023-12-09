```
def calculate_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls) and bowls[index+2] == 'X':
        bonus += 10
        if index + 4 < len(bowls) and bowls[index+4] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[index+4]) if bowls[index+4] != '-' else 0
    else:
        bonus += int(bowls[index+2]) if index + 2 < len(bowls) and bowls[index+2] != '-' else 0
        bonus += int(bowls[index+3]) if index + 3 < len(bowls) and bowls[index+3] != '-' else 0
        
    return bonus
```