```
def camel_case(s):
    words = s.replace("-", " ").split()
    result = words[0].lower()
    for i in range(1, len(words)):
        result += words[i].capitalize()
    return result