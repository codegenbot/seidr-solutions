def encode_shift(s: str) -> str:
    if not s:
        return "Input string is empty"
    result = ""
    for ch in s:
        if ch.isalpha() or ch.isspace():
            char_code = ord(ch.lower())
            shifted_code = (char_code - ord("a") + 5) % 26 + ord("a")
            result += chr(shifted_code)
    return result


def decode_shift(s: str) -> str:
    if not s:
        return "Input string is empty"
    result = ""
    for ch in s:
        if ch.isalpha() or ch.isspace():
            char_code = ord(ch.lower())
            shifted_code = (char_code - ord("a") - 5) % 26 + ord("a")
            result += chr(shifted_code)
    return result


user_input = input().strip()

encoded = encode_shift(user_input)
print(encoded)

decoded = decode_shift(encoded)
print(decoded)