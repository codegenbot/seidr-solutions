def sort_third(l: list):
    return sorted([sorted([tuple(l[i:i+3])], key=lambda x: x[2], reverse=True) for i in range(0, len(l), 3)], key=lambda x: x[-1][2], reverse=True)