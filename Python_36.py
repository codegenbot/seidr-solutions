def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(1, n + 1)
        if (
            i % 3 == 0 and i % 5 != 0         # Divisible by 3 but not by 5
            or i % 11 == 0 or "7" in str(i)    # Divisible by 11 or contains '7'
            and i % 13 != 0 and i % 21 != 0
            and "7" not in str(i) and "3" not in str(i)
            or i % 3 == 0 and i % 5 == 0      # Divisible by both 3 and 5
        )
    )
    return count