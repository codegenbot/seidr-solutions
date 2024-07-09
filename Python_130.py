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
            next_value = sum(sequence[-1::-1])
            if next_value > 4: 
                next_value = 9 - next_value
            sequence.append(next_value)
        return sequence