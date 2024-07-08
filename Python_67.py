def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    if "oranges" in s:
        apple_count = int(s.split()[0].replace("apples ", ""))
        return n - apple_count - 1
    else:
        return n - int(s) - 1