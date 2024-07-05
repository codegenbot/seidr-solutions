def make_a_pile(n):
    stones = []
    while n > 0:
        if n % 2 == 1:
            stones.append(n)
        else:
            stones.append(n + 1)
        n -= 1
    return stones