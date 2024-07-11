def sort_third(l: list):
    return sorted([i for i in l if i % 3 != 0] + [sorted([j for j in l if j % 3 == 0])[-1]] * (len([i for i in l if i % 3 == 0]) // 3))