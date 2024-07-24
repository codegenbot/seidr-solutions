```
def decode_shift():
    while True:
        while True:
            try:
                shift = int(input("Enter the shift amount: "))
                print(f"The decoded message will have a shift of {shift}.")
                message = input("Enter the encoded message: ")
                decoded_message = ""
                for char in message:
                    if char.isalpha():
                        ascii_offset = 65 if char.isupper() else 97
                        decoded_char = chr((ord(char) - ascii_offset - shift) % 26 + ascii_offset)
                        decoded_message += decoded_char
                    else:
                        decoded_message += char
                print("Decoded message: ", decoded_message)

            except ValueError:
                print("Invalid input. Please enter an integer.")

        response = input("Decode again? (y/n): ")
        if response.lower() != "y":
            return