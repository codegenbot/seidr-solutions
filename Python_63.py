def fibfib(n: int):
    total_sum = 0
    a, b = 0, 1
    seen = {0}  
    while True:
        if b % 2 == 0 and b not in seen:  
            total_sum += b
            seen.add(b)  
        if b > n:
            break
        a, b = b, a+b
    return total_sum