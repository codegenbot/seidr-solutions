def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words):  
        if i > 0:
            result += word[0].upper() + word[1:].lower()
        else:
            result += word
    return result.capitalize()