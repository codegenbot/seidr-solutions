```
def encode(text, mapping):
    return "".join(mapping[i] if j < len(mapping) and i == j.lower() else i for i in text)

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))