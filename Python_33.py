def sort_third(l: list):
    return sorted([i for i in l if i % 3 != 0]) + [x[-1] for x in [[i for i in l[:j+1] if i % 3 == 0]] if j % 3 == 0]