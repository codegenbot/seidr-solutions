def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    encoded_char = chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
                else:
                    encoded_char = chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
                encoded_message += encoded_char.lower()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message