def camel_case(s):
    words = s.split('-')
    result = words[0].capitalize()
    for word in words[1:]:
        result += ''.join(word[0].upper() + word[1:].lower()).lstrip().replace(' ', '')
    return result

print(camel_case(input()))