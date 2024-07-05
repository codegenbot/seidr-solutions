def make_a_pile(n):
    pile = []
    current = n
    for _ in range(n):
        pile.append(current)
        current += 2
    return pile