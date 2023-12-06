
def camel_case(string):
    words = re.findall(r"[a-zA-Z]+", string)
    return "".join([word.capitalize() for word in words])