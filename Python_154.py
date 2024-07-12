def cycpattern_check(a, b):
    a = "".join(e for e in a if e.isalnum()).lower()
    b = "".join(e for e in b if e.isalnum()).lower()
    return sorted(
        (a + b)
        .translate(str.maketrans("", "", "!@#$%^&*()_+-=[]{};':,<./?~`"))[:: len(b) + 1]
        .lower()
    ) == sorted((a + b)[:: len(b) + 1].lower())