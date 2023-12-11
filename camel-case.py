def camel_case(text):
    return "".join([word.title() for word in text.split("-")])