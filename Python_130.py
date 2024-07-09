```
def tri(n):
    if n == 0:
        return [3, 2, 1, 3]
    elif n == 1:
        return [3, 2, 1, 3][1:]
    elif n == 2:
        return [3, 2]
    else:
        sequence = [3, 2]
        for _ in range(2, n):
            sequence.append(sum(sequence[-1::-1]))
        return sequence