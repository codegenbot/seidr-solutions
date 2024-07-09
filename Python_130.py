def tri(n):
    if n == 0:
        return []
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 1]
    else:
        tribonacci = [3, 1]
        for i in range(2, n + 1):
            if i % 2 == 0:
                tribonacci.append(1 + i // 2)
            else:
                tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
        return tribonacci