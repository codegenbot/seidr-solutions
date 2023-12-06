def make_a_pile(n):
    piles = []
    while n > 0:
        if n % 2 == 1:
            piles.append(n)
        else:
            piles.append(n + 1)
        n -= 1
    return piles