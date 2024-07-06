def sort_third(l: list):
    l_copy = l.copy()
    return [
        sorted([x for x in l_copy if x % 3 == 0])[::-1].pop(0) if i % 3 == 0 else i
        for i in l
    ]