def fruit_distribution(s, n):
    words = s.split()
    count_apples = int(
        "".join(filter(str.isdigit, [word for word in words if "apples" in word]))
    )
    count_oranges = n - count_apples
    return count_oranges