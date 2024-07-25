def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]  
    elif n == 2:
        return [3, 2]
    else:
        sequence = [3, 2]
        for i in range(2, n):
            if i % 2 == 0:
                sequence.append(i / 2 + 1)
            else:
                last_three = sequence[-3:]
                sequence.append(sum(last_three))
        return sequence