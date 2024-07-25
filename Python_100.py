def make_a_pile(n):
    stones = [n]
    for i in range(n - 1):
        if stones[-1] % 2 == 0:
            stones.append(stones[-1] + 1)
        else:
            stones.append(stones[-1] + 2)
    return stones