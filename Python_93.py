def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
    return encoded_message

def encode(message):
    pattern = r"[a-zA-Z]"
    replacement = lambda x: chr(ord(x) + 2) if x.isalpha() else x
    return re.sub(pattern, replacement, message)