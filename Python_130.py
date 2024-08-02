def tri(n):
    tribonacci = [0, 1, 1]
    for i in range(3, n):
        if i % 2 == 0:
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
        else:
            tribonacci.append(i)
    return tribonacci[:n]