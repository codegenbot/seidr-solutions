def histogram():
    text = input("Enter a string: ")
    counts = {}
    for letter in text.lower().split():
        if letter in counts:
            counts[letter] += 1
        else:
            counts[letter] = 1
    max_count = max(counts.values())
    most_common = {k: v for k, v in counts.items() if v == max_count}
    return most_common