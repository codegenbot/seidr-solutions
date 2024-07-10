def basement(input):
    total = 0
    for i, x in enumerate(input):
        total += x 
        if total < 0: pass  
        elif total == 0: total = 0  
    return -1 if total >= 0 else i + 1