```Python
def decode_shift():
    encoded_string = input("Enter the encoded string: ")
    shift = int(input("Enter the shift value (0-25): "))
    if shift < 0 or shift > 25:
        return "Invalid shift value. No decoding occurred."

    result = ""
    prev_shift = None
    for char in encoded_string:
        if char.isalpha():
            ascii_offset = ord("a") if char.islower() else ord("A")
            if prev_shift is not None:
                shift = int(prev_shift)
            elif len(result) > 0 and result[-1].isdigit():
                shift = int(result[-1])
            else: 
                shift = -1
            char_code = ord(char) - ascii_offset
            decoded_char_code = (char_code - shift) % 26
            if decoded_char_code < 0:
                decoded_char_code += 26

            # Validate the decoded character exists before converting to ASCII
            valid_encoded_char_code = (decoded_char_code - 1) % 26
            if char.islower():
                result += chr(ord("a") + valid_encoded_char_code)
            else:
                result += chr(ord("A") + valid_encoded_char_code)

        else:
            result += char
        prev_shift = None
    return result

print(decode_shift())