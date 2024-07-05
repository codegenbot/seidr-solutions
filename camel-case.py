```
def camel_case(s):
    s = s.replace("-", " ")
    words = s.split()
    result = ""
    first_word = True
    for word in words:
        if first_word:
            result += word.lower()
            first_word = False
        else:
            result += word.capitalize()
    return result