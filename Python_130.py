def tri(n):
    sequence = [3]
    if n >= 0:
        return sequence[: n + 1]
    else:
        return []