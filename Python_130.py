def tri(n):
    if n == 0:
        return []
    elif n == 1:
        return [3]
    elif n == 2:
        return [1, 3]
    else:
        seq = [1, 3]
        for i in range(2, n):
            if i % 2 == 0:
                seq.append(i // 2 + 1)
            else:
                last_three = seq[-1], seq[-2], seq[-3]
                seq.extend([sum(last_three)])
        return seq