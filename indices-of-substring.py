def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i:i + len(target)] == target
    ]

    if not indices and len(target) > 1:
        indices = [
            i
            for i in range(len(text) - len(target) + 1)
            if text[i:i + len(target) - 1] == target[:-1]
        ]
        if target in text:
            indices.append(len(text) - len(target) + 1)

    if not indices and text == target:
        indices = [0]

    print(indices)

indices_of_substring()