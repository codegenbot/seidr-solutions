```
def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else min([x for x in l if x % 3 == 0 and x != i])
        )
        for i in sorted(l)
    ]