def decode_shift():
    s = input("Enter an encoded string: ")
    shift = int(input("Enter the shift value: "))
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a')
            temp_value = ord(ch.lower()) - ascii_offset
            temp_value = (temp_value - shift) % 26
            if ch.isupper():
                result += chr(temp_value + ord('A'))
            else:
                result += chr(temp_value + ord('a'))
        else:
            result += ch
    return result

print(decode_shift())