def camel_case(string):
    words = string.split()
    for i in range(len(words)):
        if "-" in words[i]:
            words[i] = words[i].replace("-", "")
    return ''.join([words[i].capitalize() if i != 0 else words[i] for i in range(len(words))])

string = input()
print(camel_case(string))