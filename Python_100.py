def make_a_pile(n):
    pile = []
    i = n
    while len(pile) < n:
        if i % 2 == 1:
            pile.append(i)
            i += 2
        else:
            pile.append(i)
            i += 1
    return pile