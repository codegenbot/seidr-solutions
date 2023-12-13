def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    elif n == 1:
        sequence.append(1)
        return sequence
    else:
        first = 1
        second = 1
        sequence.append(first)
        sequence.append(second)
        for i in range(2, n + 1):
            third = first + second + 1
            sequence.append(third)
            first = second
            second = third
        return sequence