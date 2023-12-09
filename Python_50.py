def decode_shift(s: str) -> str:
    message = input("Enter message: ")
    if not s.isalpha() or len(s) < 1:
        raise ValueError("Input must be a non-empty string of letters.")
    decoded_message = ""
    for ch in message:
        if ch.isalpha():
            decoded_message += chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
        else:
            decoded_message += ch
    return decoded_message