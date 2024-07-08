```
def camel_case(s):
    words = s.replace('-', ' ').split()
    camel_case_str = ''
    for i, word in enumerate(words):
        if i > 0:
            camel_case_str += word.capitalize()
        else:
            camel_case_str += word
    return camel_case_str