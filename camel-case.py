def camel_case(string):
    import re
    words = re.split(r"-| ", string)
    return "".join([word.title() for word in words if word != ""])