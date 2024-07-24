def sort_third(l: list):
    sorted_list = sorted((x for i, x in enumerate(l) if (i+1)%3 != 0), reverse=True)
    return [
        (
            y
            if i % 3 != 0
            else sorted_list[i // 3]
        )
        for i, y in enumerate(l)
    ]