def tri(n):
    if n == 0:
        return [3]

    tribonacci_sequence = [3]

    for _ in range(1, n + 1):
        if _ % 2 == 0:
            tribonacci_sequence.append(1 + _ // 2)
        else:
            last_three = tribonacci_sequence[-3:]
            tribonacci_sequence.append(sum(last_three))

    return tribonacci_sequence