def sort_third(l: list):
    odd = sorted(
        [x for j, x in enumerate(reversed(l)) if (j + 1) % 3 != 0], reverse=True
    )
    even = sorted(
        [x for j, x in enumerate(reversed(l)) if (j + 1) % 3 == 0], reverse=True
    )

    return odd + even