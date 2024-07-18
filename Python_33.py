def sort_third(l: list):
    num_slices = len(l) // 3
    return [sorted(l[i * 3 : i * 3 + 3]) for i in range(num_slices)]