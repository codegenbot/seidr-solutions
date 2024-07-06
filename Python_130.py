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
        for i in range(2, n):
            if i % 2 == 0:
                next_num = 1 + i / 2
            else:
                next_num = sum(sequence[-3:])
            sequence.append(next_num)
        return sequence