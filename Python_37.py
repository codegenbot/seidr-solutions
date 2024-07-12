def sort_even(l: list):
    sorted_pairs = [
        (x, y) for i in range(len(l) - 1) for (x, y) in [(l[i], l[i + 1]), [l[i]]]
    ]
    return [x if j % 2 != 0 else y for j, (_, (x, y)) in enumerate(sorted_pairs)]