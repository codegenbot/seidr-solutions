def encode(text, mapping={}):
    return "".join(mapping.get(i.lower(), i) for i in text)