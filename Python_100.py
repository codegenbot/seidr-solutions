def make_a_pile(n):
    stones = [n]
    for i in range(n-1):
        if n % 2 == 0:
            stones.append(n + i + 1)
        else:
            stones.append(n + i + 2)
    return stones