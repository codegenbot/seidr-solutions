```
def sort_even(l: list):
    return [
        (
            i
            if i % 2 != 0
            else l[sorted([j for j in range(len(l)) if j % 2 == 0])[-1]][::-1][x % 2]
        )
        for x, i in enumerate(l)
    ]