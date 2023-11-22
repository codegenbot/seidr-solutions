def convert_to_camel_case(string):
    words = string.split(" ")
    for i in range(len(words)):
        if "-" in words[i]:
            words[i] = words[i].replace("-", "")
    return "".join(words)