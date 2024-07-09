```
def fruit_distribution(s, n):
    s = s.lower()
    num_apples = 0
    for char in "".join(filter(str.isdigit, s)):
        num_apples = int(char) * 10 ** (7 - len("".join(filter(str.isdigit, s))))
    return n - num_apples