return [
    flatten_list(sorted([l[i], l[i + 1], l[i + 2]], reverse=True))
    for i in range(0, len(l), 3)
]