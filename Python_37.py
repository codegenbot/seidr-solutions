def sort_even(l: list):
    even_sorted = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [
        even_sorted[i // 2] if i % 2 != 0 else even_sorted[i // 2]
        for i in range(len(l))
    ]