def digitSum(s):
    return sum(
        ord(c) - 48 if "0" <= c.lower() <= "9" else
        ord(c.lower()) - 96 for c in s
    )