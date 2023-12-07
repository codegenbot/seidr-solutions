def camel_case(string):
    words = re.split(r"\-", string)
    return "".join([word[0].upper() + word[1:].lower() for word in words])