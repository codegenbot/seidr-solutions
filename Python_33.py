def sort_third(l: list):
    return sorted([(i if i % 3 != 0 else (next((x for x in l if x % 3 == 0), 0)) if any(x % 3 == 0 for x in l) else 0) for i in l])