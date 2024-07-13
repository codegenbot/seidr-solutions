def make_a_pile(n):
    pile = []
    i = n
    while len(pile) < n:
        if i % 2 == 0:
            pile.append(i)
        else:
            pile.append(i + 1)
        i += 1
    return pile