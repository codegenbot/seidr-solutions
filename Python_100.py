def make_a_pile(n):
    levels = [n]
    for i in range(1, n):
        if n % 2 == 0:
            levels.append(n + 2 * i)
        else:
            levels.append(n + 2 * i + 1)
    return levels