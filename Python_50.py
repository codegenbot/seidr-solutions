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
            if char_code < 0:
                char_code += 26
            decoded_char_code = (char_code - shift) % 26
            if decoded_char_code < 0:
                decoded_char_code += 26
            result += chr(decoded_char_code + ascii_offset)
        else:
            result += char
        prev_shift = shift
    return result

print(decode_shift())