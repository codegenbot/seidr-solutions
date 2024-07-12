def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            increment = 1 if char.lower() not in "aeiou" else 2
            new_code = (char_code - ord('a' if char.islower() else 'A') + increment) % 26 + ord('a' if char.islower() else 'A') if char.isalpha() else ord(char)
                
            encoded_message += chr(new_code)
        elif char == " ":
            encoded_message += " "
        else:
            encoded_message += char

    return encoded_message