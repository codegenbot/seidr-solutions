def fizz_buzz(n):
    nums = [
        num for num in range(1, n + 1) if (num % 3 == 0 or str(num).find("7") != -1)
    ]

    return len(nums)