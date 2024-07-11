def is_happy(s):
    return (
        len(s) >= 3
        and len(set(s[i : i + 3] for i in range(len(s) - 2))) == (len(s) - 2) // 3
    )