```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    
    for frame in range(1, 11):
        if len(rolls) <= roll_index:
            break
        
        first_roll = int(rolls[roll_index])
        
        if first_roll == 10: 
            score += 10
            roll_index += 1
        elif str(first_roll)[0] == '/':
            strike_count = 2
            while strike_count > 0:
                roll_index += 1
                if len(rolls) <= roll_index:
                    break
                
                first_subsequent_roll = int(rolls[roll_index])
                score += first_subsequent_roll
                
                if first_subsequent_roll == 10: 
                    strike_count -= 1
                else:
                    score += first_subsequent_roll
                    strike_count -= 1
        elif str(first_roll)[0] != '/':
            if first_roll < 10 and len(rolls) <= roll_index + 2:
                break
                
            first_roll, second_roll = map(int, (rolls[roll_index], rolls[roll_index+1]))
            
            score += first_roll + second_roll
            roll_index += 1
            
    return score