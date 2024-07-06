```
def sort_even(l: list):
    return [
        (
            x
            if j % 2 != 0
            else sorted([y for y in l if j // 2 % 2 == 0])[::-1][j // 2]
        )
        for j, x in enumerate(l)
    ]