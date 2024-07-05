def encrypt(s):
    new_string = ""
    for char in s:
        if char.isupper():
            # Handle uppercase letters by subtracting 65 (the ASCII value of 'A')
            # from the character's ordinal value, and then adding 2 to the result.
            new_char = chr((ord(char) - 65 + 2) % 26 + ord("A"))
        else:
            # Handle lowercase letters by adding 2 to the character's ordinal value
            # and then taking the remainder when divided by 26.
            new_char = chr((ord(char) + 2) % 26 + ord("a"))
        new_string += new_char
    return new_string