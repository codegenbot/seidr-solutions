def sort_third(l: list):
    return [sorted([i for i in l if i % 3 == 0])[i % 3] if i % 3 == 0 else i for i in l]