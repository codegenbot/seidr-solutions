return [
    (i, count) if count > 1 else [i]
    for i, count in zip(
        *[[(i)] * count for i, count in ((i,) * (n // i)) + (n,) if n % i == 0]
    )
]