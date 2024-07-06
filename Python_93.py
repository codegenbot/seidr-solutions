```
def encode(text, table):
    result = ""
    for char in text:
        if char.isalpha():
            ascii_val = ord(char.upper()) - 65
            for pair in table.split(" "):
                key, value = pair.split("n")
                value = int(value)
                new_ascii_val = (ascii_val + value) % 26
                if char.islower():
                    result += chr(new_ascii_val + 97)
                else:
                    result += chr(new_ascii_val + 65)
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))