def sort_third(l: list):
    return [sorted([i for i in l if (i % 3 == 0 and idx != 2) or (i % 3 == 2)], reverse=True) for idx, _ in enumerate(l)]