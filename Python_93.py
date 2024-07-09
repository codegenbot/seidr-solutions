def decode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            new_char_code = ord(char) - ascii_offset + 3
            if (
                new_char_code > 90
                and ascii_offset == 65
                or new_char_code > 122
                and ascii_offset == 97
            ):
                new_char_code -= 26
            result += chr(new_char_code + ascii_offset)
        else:
            result += char
    return result


print(decode("K HoW tO WrItE sOmEtHiNg InThIs fOrMaT"))