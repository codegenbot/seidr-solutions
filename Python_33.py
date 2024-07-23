def sort_third(l: list):
    even_indices = {
        val: i
        for i, val in enumerate(
            [x for t in ([y for y in l[i : i + 3]] for i in range(0, len(l), 3))]
        )
    }
    return [
        val if i % 3 != 0 else min([x for x in l if even_indices[x] % 3 != 0])
        for i, val in enumerate(l)
    ]