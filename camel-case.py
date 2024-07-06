```
def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
        if i < len(words) - 1:
            result += ' ' if words[i+1].index('-') == 0 else ''
    return result.capitalize()