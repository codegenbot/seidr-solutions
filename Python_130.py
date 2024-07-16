def tri(n):
    tribonacci = [0, 3]
    for i in range(2, n + 1):
        if i % 2 == 0:
            tribonacci.append(tribonacci[i // 2] + 1)
        else:
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
    return tribonacci[1:n+1]