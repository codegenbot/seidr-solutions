```Python
def decode_shift():
    print("This function decodes a Caesar cipher with the given shift value.")
    while True:
        try:
            shift = int(input("Enter the shift value (0-25): "))
            if 0 <= shift <= 25:
                break
            else:
                print("Invalid input. Please enter a value between 0 and 26.")
        except ValueError:
            print("Invalid input. Please enter a valid integer for the shift value.")

    while True:
        try:
            encoded_str = input("Enter an encoded string: ")
            if len(encoded_str) > 0:
                break
            else:
                print("Invalid input. Please try again.")
        except ValueError:
            print("Invalid input. Please enter a valid string for the encoded string.")

    result = ""
    for ch in encoded_str:
        if ch.isalpha():
            if "A" <= ch <= "Z":
                char_code = ord('A')
            else:
                char_code = ord('a')
            if ch.isupper():
                result += chr((ord(ch) - char_code - shift) % 26 + char_code).upper()
            else:
                result += chr((ord(ch) - char_code - shift) % 26 + char_code)
        else:
            result += ch

    print(result)

decode_shift()