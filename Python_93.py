```
def encode(message):
    assert message == "k dQnT kNqW wHcT Tq wRkTg", f"Expected '{message}' but got '{encode("I DoNt KnOw WhAt tO WrItE")}'"
    result = ""
    for char in message:
        if char == " ": 
            result += char
        elif char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else: 
            result += char
    return result