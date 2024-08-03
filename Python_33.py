def sort_third(l: list):
    sorted_list = sorted([x for x in l if i % 3 == 0])
    return [
        val if i % 3 != 0 else sorted_list[i//3]
        for i, val in enumerate(l)
    ]