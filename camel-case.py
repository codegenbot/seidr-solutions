def camel_case(s):
    result = ''
    for i,word in enumerate(s.split('-')):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
    return result