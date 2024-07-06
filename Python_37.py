def sort_even(l: list):
    return [
        i if i % 2 != 0 else j
        for j, i in sorted(
            list(zip(*[l[i::2] for i in range(len(l))][1:])), key=lambda x: x[1]
        )
    ]