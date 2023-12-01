import sys

def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    bowl_count = len(bowls)
  
    while frame <= 10 and bowl_index < bowl_count:
        if bowls[bowl_index] == 'X':
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index] == '/':
            score += 10 + get_spare_bonus(bowls, bowl_index)
            bowl_index += 2
        else:
            score += int(bowls[bowl_index])
            bowl_index += 1
      
        frame += 1
  
    return score

def get_strike_bonus(bowls, bowl_index):
    bonus = 0
    bonus_count = 2
  
    while bonus_count > 0 and bowl_index < len(bowls) - 1:
        bowl_index += 1
        if bowls[bowl_index] == 'X':
            bonus += 10
        elif bowls[bowl_index] == '/':
            bonus += 10 - int(bowls[bowl_index - 1])
        else:
            bonus += int(bowls[bowl_index])
      
        bonus_count -= 1
  
    return bonus

def get_spare_bonus(bowls, bowl_index):
    bonus = 0
  
    if bowl_index < len(bowls) - 1:
        if bowls[bowl_index + 1] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[bowl_index + 1])
  
    return bonus

bowls = sys.stdin.readline().strip()
print(calculate_score(bowls))