def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text))
        if (
            (
                len(target) > 0
                and i + len(target) <= len(text) + 1
                and text[i : i + len(target)] == target
            )
            or target == ""
        )
    ]

    for index in indices:
        print(index)

indices_of_substring()