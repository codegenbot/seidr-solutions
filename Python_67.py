def fruit_distribution(s, n):
    words = s.split()
    fruit_count = int("".join(filter(str.isdigit, word)) or 0) if "apples" in word or "oranges" in word else 0
    return n - fruit_count