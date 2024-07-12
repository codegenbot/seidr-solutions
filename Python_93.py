def encode(message):
    """This function encodes a given message based on certain conditions."""

    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[vowels.index(char.lower())]) - 97
                new_char = chr((index + 2) % 26 + 97)
            else:
                new_char = "T" if char.upper() == "t" else "t"
            result += new_char
        else:
            result += char
    return result