def tri(n):
    tribonacci = [0, 1, 1]
    for i in range(3, n):
        tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
    return tribonacci[:n]