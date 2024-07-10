Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    doubled_numbers = []
    for i, num in enumerate(card_number):
        if (i % 2 == 0): 
            doubled_numbers.append(num)
        else:
            doubled_numbers.append(num * 2)
            if (doubled_numbers[-1] > 9):
                doubled_numbers[-1] -= 9
    return sum(doubled_numbers)