```
def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        while pos != -1:
            result.append(pos)
            pos = text.find(target, pos + 1)
    return sorted(set(result))

print(indices_of_substring("F[g([g(y[g([g(H~[g,[ "))