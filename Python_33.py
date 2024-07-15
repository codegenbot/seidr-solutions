def sort_third(l: list):
    return [val if idx % 3 != 0 else sorted(l[idx:idx+3])[idx % 3] for idx, val in enumerate(l)]