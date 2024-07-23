```
def indices_of_substring(text):
    target = input()
    result = []
    pos = text.find(target)
    while pos != -1:
        result.append(pos)
        pos = text.find(target, pos + len(target))
    return result
print(indices_of_substring("F[g([g(y[g([g(H~[g,[ "))