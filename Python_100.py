def make_a_pile(n):
    levels = []
    current_stones = n
    for _ in range(n):
        levels.append(current_stones)
        current_stones += 2
    return levels