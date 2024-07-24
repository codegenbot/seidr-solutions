def check():
    decode_shift = int(input("Enter the decoding shift: "))
    text = input("Enter the encoded text: ")
    decoded_text = ""
    for char in text:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            decoded_text += chr((ord(char) - ascii_offset + decode_shift) % 26 + ascii_offset)
        else:
            decoded_text += char
    print("Decoded Text: ", decoded_text)

check()