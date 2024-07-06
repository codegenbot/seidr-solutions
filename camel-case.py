def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i in range(len(words)):
        if i == 0:
            result += words[i]
        else:
            result += words[i].capitalize()
    return result

s = input()
print(camel_case(s))