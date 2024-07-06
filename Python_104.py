def unique_digits(x):
    return sorted(
        [
            i
            for i in x
            if "0" not in str(i)
            and "2" not in str(i)
            and "4" not in str(i)
            and "6" not in str(i)
            and "8" not in str(i)
        ]
    )