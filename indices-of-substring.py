def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
    return result
print(indices_of_substring("F[g([g(y[g([g(H~[g,[ "))