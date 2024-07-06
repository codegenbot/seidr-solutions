def encode(text, table):
    result = ""
    for char in text:
        if char.isalpha():
            ascii_val = ord(char.upper()) - 65
            new_ascii_val = (ascii_val + int(table[0])) % 26
            if char.islower():
                result += chr(new_ascii_val + 97)
            else:
                result += chr(new_ascii_val + 65)
        else:
            result += char
    return result


print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))