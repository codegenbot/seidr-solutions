text = input()
target = input()

result = []
index = 0
while index < len(text):
    if text[index: index + len(target)] == target:
        result.append(index)
    index += 1

print(*result)