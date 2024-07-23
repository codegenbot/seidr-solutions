```
def camel_case(s):
    words = s.replace("-", " ").split()
    result = [words[0].capitalize()]
    for word in words[1:]:
        result.append(word[0].upper() + word[1:].lower())
    return "".join(result)