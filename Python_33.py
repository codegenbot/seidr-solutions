```
def sort_third(l: list):
    return [
        i if j % 3 != 0 else min(sorted([i for i in l if i % 3 == 0]), default=l[j%3])[j%3]
        for j, i in enumerate(l)
    ]