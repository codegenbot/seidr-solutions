def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        tribonacci = [0, 3]
        for i in range(2, n + 1):
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
        return tribonacci[1:]  # Exclude the initial [0] when returning the result