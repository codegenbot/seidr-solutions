```
def calculate_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index + 2] == 'X':
        bonus += 10
        if index + 4 < len(bowls) and bowls[index + 4] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[index + 4]) if index + 4 < len(bowls) and bowls[index + 4] != '-' else 0
    else:
        if index + 2 < len(bowls):
            bonus += int(bowls[index + 2]) if bowls[index + 2] != '-' else 0
        if index + 3 < len(bowls):
            bonus += int(bowls[index + 3]) if bowls[index + 3] != '-' else 0
        
    return bonus
```