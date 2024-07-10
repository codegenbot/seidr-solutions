```
def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([x for x in l[:i] if x % 3 == 0])[-1]
        if isinstance(i, int) else sum(sortedThird(int(i)))
        for i in l
    ]

def sortedThird(x):
    return [int(i) for i in str(x)]