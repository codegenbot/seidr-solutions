def fizz_buzz(n: int) -> int:
    count = sum(
        1
        for i in range(1, n + 1)
        if any([
            i % 11 == 0,
            '7' in str(i),
            i % 3 == 0 and i % 5 != 0,
            all(i % num != 0 for num in [13, 21, 15, 35, 33, 77])
        ])
    )
    return count