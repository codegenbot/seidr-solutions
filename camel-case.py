def camel_case(s):
    words = s.split('-')
    result = ""
    for i in range(len(words)):
        if i > 0:
            result += words[i].capitalize()
        else:
            result += words[i].lower()
    return result