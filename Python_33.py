```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for y in l[:i//3*3+(i%3)*3:(i+1)//3*3] + l[(i+1)//3*3:]])[::-1][j]
        )
        for j, x, i in enumerate(l)
    ]