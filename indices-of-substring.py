def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    if not text or not target:
        return indices

    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)

    return indices


# Call the function to solve the problem
result = indices_of_substring()
for idx in result:
    print(idx, end=" ")