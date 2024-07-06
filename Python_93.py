```
def encode(text, mapping):
    return "".join(mapping[i].lower() if i.isalpha() and i.lower() in mapping else i for i in text)

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))