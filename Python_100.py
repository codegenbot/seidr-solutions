def make_a_pile(n):
    pile = []
    for i in range(n):
        if n % 2 == 0:
            pile.append(i*2 + 1)
        else:
            pile.append(i*2 + 3)
    return pile