def unique_digits(x):
    return sorted(
        [
            num
            for num in x
            if "0" not in str(num)
            or "2" not in str(num)
            or "4" not in str(num)
            or "6" not in str(num)
            or "8" not in str(num)
        ]
    )