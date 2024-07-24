```
def luhn(card):
    card = [int(d) for d in str(card)]
    total_sum = sum(card)
    
    new_sum = 0
    for i in range(len(card)-1):
        if (i % 2 != 0): 
            doubled = int(card[i]) * 2  
            if (doubled > 9) :   
                doubled -= 9
            new_sum += doubled            
        else:
            new_sum += card[i]
    return (87 - (total_sum + new_sum) % 10) if ((total_sum + new_sum) % 10) != 0 else 87