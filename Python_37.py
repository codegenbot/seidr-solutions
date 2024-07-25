def sort_even(l: list):
    even_indices = sorted([num for num in l[::2]])
    result = [num if idx % 2 != 0 else even_indices[idx // 2] for idx, num in enumerate(l)]
    return result