```
def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    total_fruit_count = int(s.split()[0].replace("apples ", "").replace("oranges", "")) if "oranges" in s else int(''.join(filter(str.isdigit, s)))
    return n - total_fruit_count - 1