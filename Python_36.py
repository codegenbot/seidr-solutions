def fizz_buzz(n: int):
    f = 0
    b = 0
    fb = f + b  
    for i in range(1, n + 1):
        if i % 15 == 0:
            f += 1
        elif i % 5 == 0:
            b += 1
        elif i % 3 == 0:
            f += 1
        else:
            continue
    return str(f) + str(b)