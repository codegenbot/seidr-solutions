def sort_third(l: list):
    padded_list = l + [float('inf')] * (3 - len(l) % 3)
    return [
        value
        for sublist in [sorted(padded_list[i : i + 3]) for i in range(0, len(padded_list), 3)]
        for value in sublist
        if value != float('inf')
    ]