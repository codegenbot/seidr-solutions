def fizz_buzz(n: int) -> str:
    return sum(
        int(i)
        for i in range(1, n + 1)
        if (i % 11 == 0 or i % 13 == 0) and "7" in str(i) and "8" not in str(i)
    )


print(
    sum(
        int(i)
        for i in range(1, 100000 + 1)
        if (int(i) % 11 == 0 or int(i) % 13 == 0)
        and "7" in str(i)
        and "8" not in str(i)
    )
)  # Output should be 8026