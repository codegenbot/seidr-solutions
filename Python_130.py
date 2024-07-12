def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [0, 3]  # Initialize with [0, 3] instead of [3]
    else:
        sequence = [0, 3]  # Initialize with [0, 3]
        for i in range(2, n + 1):  # Start loop from 2
            if i % 2 == 0:
                sequence.append(1 + i // 2)
            else:
                sequence.append(
                    sequence[i - 1] + sequence[i - 2] + sequence[i - 3]
                )  # Fix index for the last term
        return sequence