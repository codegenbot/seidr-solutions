def indices_of_substring(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")