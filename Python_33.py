def sort_third(l: list):
    l_copy = l.copy()
    for i in range(2, len(l_copy), 3):
        l_copy[i-2:i+1] = sorted(l_copy[i-2:i+1], reverse=True)
    return l_copy