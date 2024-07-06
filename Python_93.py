def decodeMessage(key, message):
    char_index = {}
    result = ""
    for key_char in key:
        if key_char.isalpha():
            if key_char.lower() not in char_index:
                char_index[key_char.lower()] = chr(
                    (ord("a") - ord(key_char.lower()) + 1) % 26 + ord("a")
                )
            if key_char.isupper():
                result += char_index[key_char.lower()].upper()
            else:
                result += char_index[key_char].lower()
        else:
            result += key_char
    return result