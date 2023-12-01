def bowling(string):
    score = 0
    frame = 1
    i = 0
    
    while i < len(string):
        if frame == 10:
            score += get_frame_score(string[i:])
            break
        
        if string[i] == 'X':
            score += 10 + get_strike_bonus(string[i+1:i+3])
            i += 1
            frame += 1
        elif string[i] == '/':
            score += 10 - int(string[i-1]) + get_spare_bonus(string[i+1])
            i += 1
            frame += 1
        else:
            score += int(string[i])
        
        i += 1
    
    return score

def get_frame_score(frame):
    frame_score = 0
    
    for char in frame:
        if char.isdigit():
            frame_score += int(char)
        elif char == 'X':
            frame_score += 10
        elif char == '/':
            frame_score += 10 - int(frame[frame.index('/')-1])
    
    return frame_score

def get_strike_bonus(next_two_rolls):
    bonus = 0
    
    for char in next_two_rolls:
        if char.isdigit():
            bonus += int(char)
        elif char == 'X':
            bonus += 10
        elif char == '/':
            bonus += 10 - int(next_two_rolls[next_two_rolls.index('/')-1])
    
    return bonus

def get_spare_bonus(next_roll):
    if next_roll.isdigit():
        return int(next_roll)
    elif next_roll == 'X':
        return 10
    elif next_roll == '/':
        return 10 - int(next_roll[-1])

input_string = input()
print(bowling(input_string))