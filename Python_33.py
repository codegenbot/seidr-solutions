def sort_third(l: list):
    thirds = sorted([i for i in l if i % 3 == 0])
    n = len(thirds)
    mid = n // 2
    return [
        i if i % 3 != 0 else (thirds[mid] if n % 2 == 0 else thirds[mid + 1]) for i in l
    ]