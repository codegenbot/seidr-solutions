def basement(v):
    total = sum(x for x in v if x < 0)
    if total >= 0:
        return next(
            (i + 1 for i, x in enumerate(v) if sum(x for x in v[: i + 1]) < 0), -1
        )
    return 0