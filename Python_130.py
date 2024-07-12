def tri(n):
    if n == 0:
        return [3]
    elif n <= 2:
        return [3]
    else:
        sequence = [3, 2]
        for _ in range(2, n):
            next_num = sequence[-1] + sequence[-2] + sequence[-3]
            sequence.append(next_num)
        return sequence