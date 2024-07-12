```
def fruit_distribution(s, n):
    s = s.lower()
    s = s.replace("apples and", "")
    s = s.replace("oranges and", "")
    num_apples = int(''.join(filter(str.isdigit, s)))
    return n - num_apples