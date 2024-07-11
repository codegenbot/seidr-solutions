def indices_of_substring():
    import re

    input_lines = input().strip().split('\n')
    text = input_lines[0].lower()
    target = input_lines[1].lower()

    text_cleaned = re.sub(r"[^a-zA-Z0-9]", "", text)
    target_cleaned = re.sub(r"[^a-zA-Z0-9]", "", target)

    indices = [
        i
        for i in range(len(text_cleaned) - len(target_cleaned) + 1)
        if text_cleaned[i : i + len(target_cleaned)] == target_cleaned
    ]

    for index in indices:
        print(index)


indices_of_substring()