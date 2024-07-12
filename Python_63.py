```
def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 0
        seen = {0, 1}  
        while b <= n:
            if b % 2 == 0 and b not in seen:  
                total_sum += b
                seen.add(b)  
            else:
                a, b = b, a+b
        return total_sum