```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X': 
            score += 30  
            roll_index += 1            
        elif '/' in rolls[roll_index]: 
            first_roll, second_roll = map(int, rolls[roll_index].split('/'))
            score += first_roll + second_roll
            roll_index += 1            
        else:
            first_roll = int(rolls[roll_index])
            if first_roll < 10: 
                score += first_roll
                roll_index += 1
                if roll_index != 10 and rolls[roll_index] == 'X':
                    score += 30 
                    roll_index += 1
                elif '/' in rolls[roll_index]:
                    second_roll = int(rolls[roll_index].split('/')[1])
                    score += second_roll            
            else:
                score += first_roll + 10 
                roll_index += 1                
    return score