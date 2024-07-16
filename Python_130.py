def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [1]
    if n == 2:
        return [1, 1]
    tribonacci = [1, 1, 1]
    for i in range(3, n + 1):
        if i % 2 == 0:
            tribonacci.append(1 + i // 2)
        else:
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
    return tribonacci