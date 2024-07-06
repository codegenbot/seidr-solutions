def make_a_pile(n):
    piles = []
    for i in range(1, n + 1):
        if i % 2 == 0:
            piles.append(i)
        else:
            piles.append(i + 1)
    return piles