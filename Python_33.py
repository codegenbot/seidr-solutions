def sort_third(l: list):
    return [sorted(l[i::3])[j] if i % 3 == 0 else l[i] for j, i in enumerate(range(len(l)))]