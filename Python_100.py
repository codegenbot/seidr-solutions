def make_a_pile(n):
    pile = [n]
    for i in range(1, n):
        if n % 2 == 0:
            n += 2
        else:
            n += 1
        pile.append(n)
    return pile