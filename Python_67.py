def fruit_distribution(s):
    s = s.lower()
    fruit_counts = {"apple": 0, "banana": 0}

    for fruit in fruit_counts:
        if re.search(fruit, s):
            fruit_counts[fruit] += len(re.findall(fruit, s))

    return (
        "mixed"
        if fruit_counts["apple"] > 0 and fruit_counts["banana"] > 0
        else (
            "apples"
            if "apple" in fruit_counts and fruit_counts["apple"] > 0
            else (
                "bananas"
                if "banana" in fruit_counts and fruit_counts["banana"] > 0
                else "unknown"
            )
        )
    )