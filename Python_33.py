def sort_third(l: list):
    return [v if i % 3 != 0 else sorted(l[i:i+3])[j] for i, v in enumerate(l) for j in range(3) if i % 3 == 0 or j != 0]