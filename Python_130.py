def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    else:
        tribonacci = [3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                tribonacci.append(int((i / 2) + 1))
            else:
                last_three = tribonacci[-3:]
                tribonacci.append(sum(last_three))
        return tribonacci