def decode_shift(s: str):
    decoded_str = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            encoded_val = ord(ch) - ord('a')
            decoded_val = (encoded_val + 5) % 26
            decoded_char = chr(decoded_val + ord('a'))
            decoded_str += decoded_char
        elif 'A' <= ch <= 'Z':
            encoded_val = ord(ch) - ord('A')
            decoded_val = (encoded_val + 5) % 26
            decoded_char = chr(decoded_val + ord('A'))
            decoded_str += decoded_char
        else:
            decoded_str += ch
    return decoded_str