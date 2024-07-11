def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in input("Enter the message: ").lower():
        if char in vowels:
            new_char = chr((ord(char) - 96 + 2) % 26 + 96)
        elif char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                new_char = chr((ord(char) - 97 + 2) % 26 + 97)
        else:
            new_char = char
        result += new_char
    return result