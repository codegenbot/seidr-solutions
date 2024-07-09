def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    if "oranges" in s:
        apple_count = int(''.join(filter(str.isdigit, s.split()[1:])).replace(" and", ""))
        return n - apple_count - 1
    else:
        return n - int(''.join(filter(str.isdigit, s)).replace(" and", "")) - 1