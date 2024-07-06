def fruit_distribution(s, n):
    s = s.lower()
    words = s.split()
    count = 0
    for word in words:
        if "apples" in word and (result := word.replace(" apples", "").replace("apple", "")).isdigit() and int(result) < n:
            count += int(result)
        elif "oranges" in word and (result := word.replace(" oranges", "").replace("orange", "")).isdigit() and int(result) < n:
            count += int(result)
    return n - count