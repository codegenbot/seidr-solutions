def make_a_pile(n):
    pile = [n]
    for i in range(n-1):
        if n % 2 == 0:
            pile.append(n + i + 1)
        else:
            pile.append(n + i + 2)
    return pile