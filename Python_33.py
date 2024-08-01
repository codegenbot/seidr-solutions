def sort_third(l: list):
    return [sorted(l[i:i+1] if i % 3 == 0 else l[i:i+1])[0] for i in range(len(l))]