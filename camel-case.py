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
            result += ''.join(x for x in words[i+1] if not x.isalpha())  
    return result