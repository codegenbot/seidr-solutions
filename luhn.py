Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_even = []
    for i, n in enumerate(card_number):
        if i % 2 == 0:
            double_even.append(n)
        else:
            double_even.append(2 * n)
            
    total_sum = sum([x // 10 + (x % 10) for x in double_even])
    
    return total_sum