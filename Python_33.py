def sort_third(l: list):
    return [
        sorted([i for i in l if i % 3 == 0])[(len(sorted([i for i in l if i % 3 == 0], reverse=True)) - 1) if x % 3 != 0 else k]
        for k, x in enumerate(sorted([x for x in l if x % 3 == 0], reverse=True))
    ]