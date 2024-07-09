def choose_num(x, y):
    if x > y:
        bigger = x
        smaller = y
    else:
        bigger = y
        smaller = x
    
    for i in range(bigger, smaller-1, -1):
        if i % 2 == 0:
            return i
    return -1