```
def tri(n):
    if n <= 2:
        if n == 1:
            return [1, 3]
        else:
            return [3, 2]
    else:
        sequence = [3, 2]
        for _ in range(2, n):
            sequence.append(sequence[-1] + sequence[-2] + sequence[-3])
        return sequence