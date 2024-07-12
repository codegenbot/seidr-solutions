def tri(n):
    tribonacci = [3] if n > 0 else []
    while len(tribonacci) <= n:
        if tribonacci[-1] % 2 == 0:
            tribonacci.append(1 + tribonacci[-1] // 2)
        else:
            tribonacci.append(tribonacci[-1] + tribonacci[-2] + tribonacci[-3])
    return tribonacci