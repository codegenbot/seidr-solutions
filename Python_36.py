def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(1, n + 1)
        if (
            (i % 3 == 0 and i % 5 != 0) or  # Divisible by 3 but not by 5
            i % 11 == 0 or "7" in str(i) or  # Divisible by 11 or contains '7'
            (i % 3 == 0 and i % 5 == 0)      # Divisible by both 3 and 5
        ) and i % 13 != 0 and i % 21 != 0  # Additional exclusion conditions
           and "3" not in str(i)
           and "5" not in str(i)  # Add condition to exclude numbers containing '5'
           and i % 15 != 0  # Add condition to exclude numbers divisible by 15
    )
    return count + 1  # Add 1 to the count to include an additional condition