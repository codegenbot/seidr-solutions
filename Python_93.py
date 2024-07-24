```
def encode(message):
    """This function replaces all vowels in a given message with the next letter in the alphabet.
If a vowel is uppercase, it also converts it to lowercase."""
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                encoded_char = chr((index + 2) % 26 + 97)
                if char.isupper():
                    encoded_char = encoded_char.upper()
                encoded_message += encoded_char
            else:
                if char.isupper():
                    encoded_message += char.lower()
                else:
                    encoded_message += char
        else:
            encoded_message += char
    return encoded_message