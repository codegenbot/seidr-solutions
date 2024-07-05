def decode_shift(message):
    shift = int(input("Enter the number of characters to shift: "))
    decoded_string = ""
    for ch in message:
        if ord(ch) >= ord("a") and ord(ch) <= ord("z"):
            decoded_char = (ord(ch) - shift - ord("a")) % 26 + ord("a")
            decoded_string += chr(decoded_char)
    return decoded_string