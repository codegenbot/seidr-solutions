def decode_shift(encoded_string):
    shift = int(input("Enter the shift value (0-25): "))
    if shift < 0 or shift > 25:
        return str(shift) + " is not a valid shift value. Please enter a shift value between 0 and 25."

    result = ""
    i = 0
    while i < len(encoded_string):
        if encoded_string[i].isalpha():
            ascii_offset = ord("a") if encoded_string[i].islower() else ord("A")
            if i > 0 and encoded_string[i-1].isdigit():
                shift = int(encoded_string[i-1])
                i -= 1
            elif i > 0:
                shift = int(result[-1]) % 26
            else: 
                shift = -1
            if ((ord(encoded_string[i]) - ascii_offset - shift) % 26) <= 0:
                result += chr(((ord(encoded_string[i]) - ascii_offset - shift + 26) % 26) + ascii_offset)
            else:
                result += chr(((ord(encoded_string[i]) - ascii_offset - shift) % 26) + ascii_offset)
        else:
            result += encoded_string[i]
        i += 1
    return result