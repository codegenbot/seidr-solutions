def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    oranges = int(s.split()[0].replace("oranges", "")) if "oranges" in s else 0
    return n - (int(s.split()[0].replace("apples ", ""))) - oranges