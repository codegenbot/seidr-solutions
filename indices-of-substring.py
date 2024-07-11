def indices_of_substring(text, target):
    return [i for i, _ in enumerate(text) if text[i:i + len(target)] == target]

text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
print(*result)