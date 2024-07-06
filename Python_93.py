def encode(text, table):
    result = ""
    shifts = [int(x) for x in table.split()[1:]]
    for i, char in enumerate(text):
        if char.isalpha():
            ascii_val = ord(char.upper()) - 65
            new_ascii_val = (ascii_val + int(table.split()[0])) % 26
            if char.islower():
                result += chr(new_ascii_val + 97)
            else:
                result += chr(new_ascii_val + 65)
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))