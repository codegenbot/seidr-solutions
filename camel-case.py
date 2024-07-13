def camel_case(s):
    s = s.replace("-", " ")
    words = s.split()
    result = ""
    for i, word in enumerate(words):
        if i == 0:
            result += word.lower() + " "
        else:
            result += word.capitalize()
    return result.strip()