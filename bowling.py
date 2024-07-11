def get_strike_bonus(bowls, index):
    bonus = 10
    num_bonuses = 2
    
    while num_bonuses > 0 and index < len(bowls):
        if bowls[index] == "X":
            bonus += 10
            if bowls[index + 1] == "X":
                bonus += 10
                if index + 2 < len(bowls) and bowls[index + 2] == "X":
                    bonus += 10
                elif bowls[index + 2] != "-":
                    bonus += int(bowls[index + 2])
            elif bowls[index + 1] == "/":
                bonus += 10
            elif bowls[index + 1] != "-":
                bonus += int(bowls[index + 1])
                
        elif bowls[index] == "/":
            bonus += 10 - int(bowls[index - 1])
            
        elif bowls[index] != "-":
            bonus += int(bowls[index])
            
        num_bonuses -= 1
        index += 1
        
    return bonus

print(get_strike_bonus("32XX7/534/X-66-1-", 2))