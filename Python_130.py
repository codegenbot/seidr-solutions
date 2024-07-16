def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [0, 1, 1]
    else:
        tribonacci = [0, 1, 1]
        for i in range(3, n):
            if i % 2 == 0:
                tribonacci.append(tribonacci[-1] + tribonacci[-2] + tribonacci[-3])
            else:
                tribonacci.append(tribonacci[-1] + tribonacci[-2])
        return tribonacci