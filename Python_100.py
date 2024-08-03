def make_a_pile(n):
    pile = []
    i = 1
    while len(pile) < n:
        if len(pile) % 2 == 0:
            pile.append(i)
            i += 2
        else:
            pile.append(i)
            i += 1
    return pile