def decode_shift(s: str):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    
    result = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                result += chr(((ord(ch) - 97 + 3) % 26) + ord("a"))
            else:
                result += chr(((ord(ch) - 65 + 3) % 26) + ord("A"))
        else:
            result += ch
    return result