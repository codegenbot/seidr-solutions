def encode_shift(s: str) -> str:
    if not s:
        return "Input string is empty"
    
    encoded = ""
    for ch in s:
        if ch.isalpha() or ch.isspace():
            encoded += chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a"))
        else:
            return "Invalid input"
    
    return encoded


def decode_shift(s: str) -> str:
    if not s:
        return "Input string is empty"
    
    decoded = ""
    for ch in s:
        if ch.isalpha() or ch.isspace():
            decoded += chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
        else:
            return "Invalid input"
    
    return decoded


user_input = input("Enter a string: ")

encoded = encode_shift(user_input)
print(encoded)

decoded = decode_shift(encoded)
print(decoded)