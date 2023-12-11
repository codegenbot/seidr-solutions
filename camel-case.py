[PYTHON]
def camel_case(string):
    words = string.split(" ")
    for i in range(len(words)):
        if "-" in words[i]:
            words[i] = words[i].title()
    return "".join(words)
[/PYTHON]
