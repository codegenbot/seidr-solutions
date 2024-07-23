def sort_third(l: list):
    return [(sorted([x for x in l[i:i+3] if x % 3 != 0]) if i % 3 == 0 else i) for i in range(len(l))]