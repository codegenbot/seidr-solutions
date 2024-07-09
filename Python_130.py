```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        sequence = [3, 2]
        for _ in range(2, n):
            next_num = sum(sequence[-2:]) + sequence[0]
            sequence.append(next_num)
        return sequence