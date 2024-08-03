```Python
def sort_third(l: list):
    return [
        (
            x
            if j % 3 != 0
            else sorted([y for y in l[:j // 3 * 3 + (j % 3) * 3 : (j + 1) // 3 * 3] + l[(j + 1) // 3 * 3 :]])[::-1][k]
        )
        for k, j, x in enumerate(l)
    ]