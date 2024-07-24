def decode_shift(): 
    while True:
        try:
            shift = int(input("Enter the shift amount: "))
            print(f"The decoded message will have a shift of {shift}.")
            encoded_message = input("Enter the encoded message: ")
            decoded_message = ""
            for char in encoded_message:
                if char.isalpha():
                    ascii_offset = 65 if char.isupper() else 97
                    decoded_message += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
                else:
                    decoded_message += char
            print("Decoded message:", decoded_message)
            return shift