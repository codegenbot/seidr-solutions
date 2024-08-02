```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                next_val = 1 + i / 2
            else:
                next_val = sum(sequence[-2:])
            sequence.append(next_val)
        return sequence