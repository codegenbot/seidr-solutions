def make_a_pile(n):
    pile = []
    for i in range(n):
        if n % 2 == 1:
            pile.append(2*i + 1)
        else:
            pile.append(2*i + 2)
    return pile