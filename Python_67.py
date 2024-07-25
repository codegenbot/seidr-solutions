def fruit_distribution(s):
    s = s.lower()
    fruit_counts = {"apple": 0, "banana": 0}

    for fruit in fruit_counts:
        if re.search(fruit, s):
            fruit_counts[fruit] += len(re.findall(fruit, s))

    if fruit_counts["apple"] > 0 and fruit_counts["banana"] > 0:
        return "mixed"
    elif "apple" in fruit_counts and fruit_counts["apple"] > 0:
        return "apples"
    elif "banana" in fruit_counts and fruit_counts["banana"] > 0:
        return "bananas"
    else:
        return "unknown"