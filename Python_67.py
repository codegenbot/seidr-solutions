```
def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "oranges apples")
    n -= int("".join(filter(str.isdigit, s))) + (0 if len(s.split()) < 2 or not any(i.isdigit() for i in s.split()[1]) else int("".join(filter(str.isdigit, s.split()[1]))))
    return n