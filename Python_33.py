def sort_third(l: list):
    return [l[i:i+3].sort() if (i+1) % 3 == 0 and i+2 <= len(l)-1 else sorted(l[i:i+3]) for i in range(len(l))]