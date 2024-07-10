return [
    x
    for _, x in sorted(
        (x, i) for i, x in zip(l1 + l2 + l3, range(len(l1) + len(ll) + len(l3)))
    )
]