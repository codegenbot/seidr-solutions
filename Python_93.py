def encode(key, message):
    char_index = {v: k for k, v in {k: v.lower() if k.isupper() else k for k, v in zip(key, key)}.items()}
    result = ""
    for char in message:
        if char not in char_index:
            result += char
        else:
            if char.isalpha():
                if char.isupper():
                    result += char_index[char].upper()
                else:
                    result += char_index[char]
            else:
                result += char
    return result