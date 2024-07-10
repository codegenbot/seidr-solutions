def fruit_distribution(s, n):
    return sum(
        1 for fruit in s.split() if fruit.replace("and", "").replace(",", "").isdigit()
    )