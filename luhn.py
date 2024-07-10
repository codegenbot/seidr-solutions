```Python
def luhn(card):
    card = [int(i) for i in str(card)]
    
    result = [x if i % 2 != 0 else (2 * x) % 10 else x if (2 * x) > 9 else 2 * x 
              for i, x in enumerate(card)]
    
    return sum(result)