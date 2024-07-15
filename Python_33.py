def sort_third(l: list):
    sorted_list = [
        sorted(l[i : i + 3])
        for i in range(0, len(l), 3)
        if i + 2 < len(l)
    ]

    if len(l) % 3 != 0:
        sorted_list.append(sorted(l[len(l) - len(l) % 3 : ]))

    return sorted_list