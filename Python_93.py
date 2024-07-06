def encode(message):
    encoded_message = ""
    for char in message:
        ord_char = ord(char)
        if char.isalpha():
            if ord_char >= ord("A") and ord_char <= ord("Z"):
                # Uppercase letter
                encoded_char = chr(ord("A") + (ord_char - ord("A")) % 26)
            elif ord_char >= ord("a") and ord_char <= ord("z"):
                # Lowercase letter
                encoded_char = chr(ord("a") + (ord_char - ord("a")) % 26)
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message