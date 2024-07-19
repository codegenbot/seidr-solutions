def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr(ord(char) + 2) if ord(char) + 2 <= ord('z') or ord(char) + 2 <= ord('Z') else chr(ord(char) - 24)
                encoded_message += new_char
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message