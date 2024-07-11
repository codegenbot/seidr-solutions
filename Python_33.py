```Python
def sort_third(l: list):
    return [
        x if i % 3 != 0 else min([y for y in l[:i] + l[i+1:] if (j:=list(l).index(y)) % 3 != 0 or j >= i], default=x)
        for i, x in enumerate(l)
    ]