def tri(n):
    if n == 0:
        return [1]

    elif n == 1:
        return [1, 3]

    else:
        sequence = [1, 3]

        for i in range(2, n + 1):
            next_val = sum(sequence[-1::-1])
            sequence.append(next_val)

        return sequence