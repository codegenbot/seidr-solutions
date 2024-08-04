def make_a_pile(n):
    stones = [n]
    for i in range(1, n):
        if n % 2 == 0:
            n += 2
        else:
            n += 1
        stones.append(n)
    return stones