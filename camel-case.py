def camel_case():
    s = input().replace("-", " ").split()
    result = ""
    for word in s:
        if result:
            result += word.capitalize()
        else:
            result += word
    return result