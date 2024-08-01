return [
    (
        x
        if i % 2 != 0
        else (
            sorted([y for j, y in enumerate(l) if j * 2 == i])[0]
            if any(j * 2 == i for j in range(len(l)))
            else None
        )
    )
    for i, x in enumerate(l)
]