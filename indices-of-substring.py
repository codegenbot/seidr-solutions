text = input()
target = input()

result = [i for i in range(len(text)) if text.startswith(target, i)]
print(*result)