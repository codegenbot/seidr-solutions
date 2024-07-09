def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([x for x in l if (n := i // 3) * 3 <= j < (n + 1) * 3])[j % 3 - 1]
        for i, val in enumerate(l)
        for j in range(i//3*3,i//3*3+3)
    ]