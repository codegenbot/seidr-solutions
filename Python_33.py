def sort_third(l: list):
    sorted_list = sorted(
        (
            x if i % 3 != 0 else [y for y in l if (i - j) % 3 == 2][::-1][0]
            for i, x in enumerate(l)
        ),
        reverse=True,
    )
    return [
        (x if i % 3 != 0 else sorted_list[j : j + 1][0])
        for i, x in enumerate(sorted_list)
    ]