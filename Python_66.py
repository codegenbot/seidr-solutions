def digitSum(s):
    return sum(
        ord(c) - 48 if "0" <= c <= "9" else ord(c) - 55 if c.isalpha() else 0 for c in s
    )