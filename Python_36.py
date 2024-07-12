def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(1, n + 1)
        if (
            ((i % 3 == 0) or (i % 5 == 0) or (i % 7 == 0) or (i % 11 == 0))
            and (i % 13 != 0) and (i % 15 != 0) and (i % 21 != 0)
            and (i % 33 != 0) and (i % 35 != 0) and (i % 77 != 0)
            and ("7" in str(i) or any(char == '7' for char in str(i)))
            and all(char.isdigit() and int(char) > 7 for char in str(i))
            and "5" not in str(i)
        )
    )
    return count