```
def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for y in l[:i] + l[i+1:]])[0]
        for i, x in enumerate(l)
    ]