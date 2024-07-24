```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    
    def double_odd(even):
        return [x * 2 if i % 2 != 0 else x for i, x in enumerate(even)]
        
    result = sum([x if x < 10 else x - 9 for x in sum(double_odd(card_number), [])])
    
    return str(result)