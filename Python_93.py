def encode(text, mapping):
    return "".join(mapping[i] if i.isalpha() and i.lower() in mapping else i for i in text)