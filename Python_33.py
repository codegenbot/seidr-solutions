def sort_third(l: list):
    for i in range(0, len(l)-1, 3):
        l[i:i+3] = sorted(l[i:i+3], reverse=True)
    return l