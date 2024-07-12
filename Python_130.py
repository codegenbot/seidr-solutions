def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        tribonacci = [3, 2]
        for i in range(2, n):
            if i % 2 == 0:
                tribonacci.append(int((i + 1) / 2))
            else:
                a, b = tribonacci[-2], tribonacci[-1]
                tribonacci.append(a + b + int((i + 3) / 2))
        return tribonacci