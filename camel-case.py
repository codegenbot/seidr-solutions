def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i in range(len(words)):
        if i > 0:
            result += words[i].capitalize()
        else:
            result += words[i]
    return result

s = input()
print(camel_case(s))