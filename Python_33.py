def sort_third(l: list):
    return [
        val if i % 3 != 0 else min([x for x in l if (i - 1) // 3 * 3 + j == i])
        for i, val in enumerate(l)
        for j in range(3)
    ]