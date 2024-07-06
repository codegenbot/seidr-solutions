```
def sort_third(l: list):
    sorted_list = sorted([x for x in l if (i := l.index(x)) % 3 != 0], reverse=True)
    return [
        (
            x
            if i % 3 != 0
            else next((y for y in l if y > x), x)
        )
        for i, x in enumerate(l)
    ]