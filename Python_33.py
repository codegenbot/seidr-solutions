def sort_third(l: list):
    first = sorted([i for i in l if i % 3 == 0])
    second = sorted([i for i in l if i % 3 == 1])
    third = sorted([i for i in l if i % 3 == 2])
    return [i for _ in range(len(first)) for i in (first, second, third)]