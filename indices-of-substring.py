def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text)) if text[i:].startswith(target)]

    return indices


output = indices_of_substring()
print(*output)