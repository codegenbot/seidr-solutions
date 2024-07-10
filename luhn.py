def luhn(card):
    card = [int(i) for i in str(card)]
    
    # Double every other digit starting with the second digit
    result = [x if i % 2 != 0 else (2 * x) % 10 else x if (2 * x) > 9 else 2 * x 
              for i, x in enumerate(card)]
    
    # Return the sum of all the new digits
    return sum(result)