```python
def encode(s, t):
    encoded = ""
    for char, sub_char in zip(s.lower(), t.lower()):
        if char.isalpha():
            encoded += sub_char
        else:
            encoded += char
    print(encoded)

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))