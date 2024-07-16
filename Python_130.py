def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        tribonacci = [0, 3]
        a, b, c = 0, 0, 3
        for i in range(2, n):
            tribonacci.append(a + b + c)
            a, b, c = b, c, a + b + c
        return tribonacci