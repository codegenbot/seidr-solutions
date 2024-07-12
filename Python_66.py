def digitSum(s):
    return sum(
        ord(c) - 48 if "0" <= c <= "9" else
        (ord(c.lower()) - 96 if c.isalpha() else 0) for c in s
    )