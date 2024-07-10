def fibfib(n: int):
    if n <= 1:
        return "0"
    elif n % 2 == 0:  
        a, b = 0, 1
        result = [str(a)]
        while b * b < n:
            a, b = b, a+b
            result.append(str(a))
        return ' -> '.join(map(str, result))
    else:
        a, b = 0, 1
        result = [str(a)]
        while a < n:
            a, b = b, a + b
            result.append(str(a))
        return ' -> '.join(map(str, result))