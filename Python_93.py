```
def encode(text, table):
    """result = ""
    shifts = [int(x) for x in table.split() if x.isdigit()]
    text = text.lower()
    for char in text:
        if char.isalpha():
            ascii_val = ord(char) - 97
            new_ascii_val = (ascii_val + int(shifts[0 % len(shifts)])) % 26
            result += chr(new_ascii_val + 97)
        else:
            result += char
    return result"""

print(encode("i doNt knOw whAt tO wrItE", "k dQnT kNqW wHcT Tq wRkTg"))