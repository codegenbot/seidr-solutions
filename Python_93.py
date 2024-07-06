```
def encode(input_str, shift_str):
    return "".join(chr((ord(c) - 97 + ord(shift) - 101) % 26 + 97) if c.isalpha() else c for c, shift in zip(input_str.lower(), shift_str.lower()))

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))