def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 0
        seen = {0, 1}  
        while True:
            if b % 2 == 0 and b not in seen:  # check if the number is even and hasn't been added before
                total_sum += b
                seen.add(b)  
            a, b = b, a+b
            if b > n:
                break
        return total_sum