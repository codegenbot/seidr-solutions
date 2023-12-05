def camel_case(string):
    words = string.split("-")
    result = ""
    for word in words:
        if word == "":
            continue
        else:
            result += word.capitalize()
    return result