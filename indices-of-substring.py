def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")