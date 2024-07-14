Here is the solution:

def luhn(card):
    card = [int(x) for x in str(card)]
    double_digit_sum = 0
    normal_sum = sum(card[:15])
    
    for i in range(1, len(card), 2):
        digit = card[i] * 2
        if digit > 9:
            double_digit_sum += (digit % 10) + 9
        else:
            double_digit_sum += digit
            
    return str(normal_sum + double_digit_sum)