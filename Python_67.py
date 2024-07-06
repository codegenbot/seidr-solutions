def fruit_distribution(s, n):
    s = s.lower()
    words = s.split()
    count = 0
    for word in words:
        if (
            "apples" in word
            and int(word.replace(" apples", "").replace("apple", "")) < n
        ):
            count += int(word.replace(" apples", "").replace("apple", ""))
        elif (
            "oranges" in word
            and int(word.replace(" oranges", "").replace("orange", "")) < n
        ):
            count += int(word.replace(" oranges", "").replace("orange", ""))
    return n - count