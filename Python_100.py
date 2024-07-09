def make_a_pile(n):
    stones = [n]
    for i in range(n - 1):
        if n % 2 == 0:
            n += 1
        else:
            n += 2
        stones.append(n)
    return stones