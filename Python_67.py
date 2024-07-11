def fruit_distribution(s, n):
    words = s.split()
    apple_count_str = "".join(filter(str.isdigit, [word for word in words if "apples" in word]))
    count_apples = 0 if not apple_count_str else int(apple_count_str)
    return n - count_apples