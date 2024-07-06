def encode(text, mapping="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"):
    return "".join(mapping[i.lower()] if i.isalpha() else i for i in text)