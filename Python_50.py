def decode_shift(s: str):
    result = ""
    shift_value = 5
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    
    for char in s:
        if char.isalpha():
            position = alphabet.index(char.lower())
            new_position = (position - shift_value) % 26
            if char.isupper():
                result += alphabet[new_position].upper()
            else:
                result += alphabet[new_position]
        else:
            result += char
    
    return result