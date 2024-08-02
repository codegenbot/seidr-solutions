def sort_even(l: list):
    if not l:
        return []
    even = [x for i, x in enumerate(l) if i % 2 == 0]
    odd = [x for i, x in enumerate(l) if i % 2 != 0]
    return [
        even[i // 2] if i < len(even) else odd[i - len(even)] for i in range(len(l))
    ]