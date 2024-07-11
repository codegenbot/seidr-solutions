def sort_third(l: list):
    return [l[i] if i % 3 != 0 else sorted([l[j] for j in range(i-2, i+1)])[0] for i in range(len(l))]