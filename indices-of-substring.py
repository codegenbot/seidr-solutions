def indices_of_substring(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices


text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")