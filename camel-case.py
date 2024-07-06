```
def camel_case(s):
    words = s.replace("-", " ").split()
    result = words[0]
    for i in range(1, len(words)):
        result += ''.join(word.capitalize() for word in words[i].split())
    return result