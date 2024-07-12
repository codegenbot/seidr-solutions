```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for _ in range(2, n + 1):
            if sequence[-1] % 2 == 0:
                next_num = int((sequence[-1] + 1) / 2)
            else:
                next_num = sequence[-2] + sequence[-3] + (sequence[-1] + 1)
            sequence.append(next_num)
        return sequence