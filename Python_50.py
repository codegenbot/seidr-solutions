def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    return "".join([chr(((ord(ch.lower()) - ord('a')) % 26) + ord('a')) if ch.isalpha() else 
                    chr(((ord(ch.upper()) - ord('A')) % 26) + ord('A')) if ch.isupper() else ch for ch in s])