def tri(n):
    sequence = [3]

    if n <= 1:
        return sequence[: n + 1]

    sequence.append(1 + n // 2) if n % 2 == 0 else sequence.extend(
        tri(n - 1)[-2:] + [tri(n + 1)[-1]]
    )

    return sequence