def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(1, n + 1)
        if (
            (i % 3 == 0 and i % 5 == 0)
            or (i % 11 == 0)
            or ("7" in str(i))
            or any(j in str(i) for j in ["13", "21", "15", "35", "33", "77"])
        )
    )
    return count