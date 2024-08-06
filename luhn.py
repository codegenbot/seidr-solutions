Here is the completed code:

def luhn(card_number):
    card_number = [int(x) for x in card_number[2:]] # Convert input into a list of integers
    result = sum([int((x*2)>9)*1 + (x if int((x*2)<9) else 9-x) for i, x in enumerate(card_number[::-1])][::-1]) # Apply Luhn's algorithm
    return str(result)