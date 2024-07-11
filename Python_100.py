def make_a_pile(n):
    pile = []
    i = n
    while i > 0:
        if i % 2 == 1:
            pile.append(i)
            i -= 1
        else:
            pile.append(i)
            i -= 2
    return pile[::-1]