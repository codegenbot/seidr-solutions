def camel_case(string):
    words = string.split("-")
    for i in range(len(words)):
        if words[i] == "":
            words[i] = ""
        else:
            words[i] = words[i].capitalize()
    return "".join(words)