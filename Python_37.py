def sort_even(l: list):
    return [
        sorted([x for x in l[: i + 1] if i % 2 == 0])[0] if i % 2 != 0 else l[i]
        for i in range(len(l))
    ]