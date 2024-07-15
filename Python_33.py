def sort_third(l: list):
    return sorted([sub for sub in [l[i:i+3] for i in range(0, len(l), 3) if len(l[i:i+3]) >= 3], key=lambda x: x[2] if len(x) >= 3 else x[0])