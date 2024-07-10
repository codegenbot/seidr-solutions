```
def decode_shift():
    s = input("Enter a shifted string: ")
    d = int(input("Enter the shift value: "))
    return "".join([chr(((ord(ch.lower()) - 97 - d) % 26) + 97) if ch.isalpha() and ch.islower() else 
                    chr(((ord(ch.upper()) - 65 - d) % 26) + 65) if ch.isalpha() and not ch.islower() else 
                    ch for ch in s])