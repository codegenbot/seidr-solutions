return tuple(
    sorted(
        [(item if isinstance(item, tuple) else (item,)) for item in result],
        key=lambda x: (x[1] or 0, x[2]),
    )
)