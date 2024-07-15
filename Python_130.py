def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [0, 1]
    tribonacci = [0, 0, 1]
    for i in range(3, n + 1):
        tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
    return tribonacci