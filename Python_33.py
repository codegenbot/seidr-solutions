def sort_third(l: list):
    return sorted([sorted(l[i:i+3], key=lambda x: x % 10, reverse=True) if len(l[i:i+3]) == 3 else l[i:i+3] for i in range(0, len(l), 3)], key=lambda x: x[2], reverse=True)