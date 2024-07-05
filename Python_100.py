def make_a_pile(n):
    result = []
    current_stones = n
    for _ in range(n):
        result.append(current_stones)
        current_stones += 2
    return result