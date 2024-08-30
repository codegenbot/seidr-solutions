```
def camel_case(s):
    words = s.split('-')
    result = [words[0].capitalize()]
    for word in words[1:]:
        result.append(word.capitalize())
    return ''.join(result)

print(camel_case(input()))