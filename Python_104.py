def unique_digits(x):
    return sorted(
        [
            num
            for num in x
            if "0" not in str(num)
            and "2" not in str(num)
            and "4" not in str(num)
            and "6" not in str(num)
            and "8" not in str(num)
        ]
    )