```
def sort_third(l: list):
    return sorted([i for i in range(len(l)) if (i+1) % 3 == 0])[:1]