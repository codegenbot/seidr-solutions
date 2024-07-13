def indices_of_substring(text, target):
    if not text or not target:
        return []
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices


t = input()
s = input()
result = indices_of_substring(t, s)
for i in result:
    print(i, end=" ")