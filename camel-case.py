def camel_case(s):
    words = s.split('-')
    result = ''
    for i, word in enumerate(words, start=1):
        if i > 1:
            result += word[0].upper() + word[1:].lower()
        else:
            result += word.capitalize()
    return result

print(camel_case(input()))