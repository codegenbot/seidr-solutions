def camel_case(string):
    words = re.findall(r"\w+(?<!_)", string)
    return "".join([word.title() for word in words])