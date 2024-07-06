def encode(text, mapping):
    return "".join(c if c.isalnum() else mapping.get(c.lower(), c) for c in text)

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))