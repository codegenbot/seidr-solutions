```
def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l[i-1:i+2] if x % 3 == 0])[::-1]
        )
        for i in range(1, len(l))
    ]