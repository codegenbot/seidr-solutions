def tri(n):
    tribonacci = [3]
    for i in range(1, n + 1):
        if i % 2 == 0:
            tribonacci.append(1 + i // 2)
        else:
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i + 1])
    return tribonacci