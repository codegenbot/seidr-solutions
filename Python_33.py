def sort_third(l: list):
    return [
        sorted([i for i in l if i % 3 == 0])[j] if j % 3 == 0 else i
        for j, i in enumerate(l)
    ]