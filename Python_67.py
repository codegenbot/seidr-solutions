def fruit_distribution(s, n):
    words = s.split()
    apple_count = int(
        "".join(filter(str.isdigit, [word for word in words if "apples" in word])) or 0
    )
    orange_count = int(
        "".join(filter(str.isdigit, [word for word in words if "oranges" in word])) or 0
    )
    return n - apple_count - orange_count