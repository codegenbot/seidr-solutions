def camel_case(s):
    words = s.replace("-", " ").split()
    return words[0] + "".join(word.capitalize() for word in words[1:])

s = input()
print(camel_case(s))