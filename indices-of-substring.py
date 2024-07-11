def indices_of_substring(text, target):
    return [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i : i + len(target)] == target or text.startswith(target, i)
    ]


text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
print(*result)