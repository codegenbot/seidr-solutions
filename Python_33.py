def sort_third(l: list):
    for i in range(2, len(l), 3):
        chunk = sorted(l[i-2:i+1])
        l[i-2:i+1] = chunk
    return l