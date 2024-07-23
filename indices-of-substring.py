```
def indices_of_substring(text):
    target = input()
    result = []
    pos = 0
    while pos != -1:
        result.append(pos)
        pos = text.find(target, pos + 1)
    return result
print(indices_of_substring("F[g([g(y[g([g(H~[g,[ "))