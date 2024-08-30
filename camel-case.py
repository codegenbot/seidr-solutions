```
def camel_case(s):
    words = s.split('-')
    result = [words[0].capitalize()]
    for word in words[1:]:
        result.append(word.capitalize())
    return ' '.join(result).replace(' ', '').title()

print(camel_case(input()))