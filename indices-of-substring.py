def indices_of_substring():
    text = input().strip()
    target = input().strip()

    range_condition = len(target) > len(text) or (len(target) == 0)
    indices = [
        i
        for i in range(len(text) - len(target) + 1 + range_condition)
        if len(target) == 0 or (len(text) >= len(target) and i + len(target) <= len(text) and text[i:i + len(target)] == target)
    ]

    for index in indices:
        print(index)

indices_of_substring()