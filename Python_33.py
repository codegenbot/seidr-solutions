def sort_third(l: list):
    return sorted([i for i in l if i % 3 != 0]) + [
        x[-1] for x in [[i for i in range(0, len(l), 3)]]
    ]