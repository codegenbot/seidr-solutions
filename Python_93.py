```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'x' or char.lower() == 'y':
                result += 'A' if char.isupper() else 'b'
            elif char.lower() in ['a', 'e', 'i', 'o', 'u']:
                if char.lower() == 'a':
                    result += 'B' if char.isupper() else 'b'
                elif char.lower() == 'e':
                    result += 'G' if char.isupper() else 'g'
                elif char.lower() == 'i':
                    result += 'K' if char.isupper() else 'k'
                elif char.lower() == 'o':
                    result += 'Q' if char.isupper() else 'q'
                else:
                    result += chr(ord(char) + 1)
            else:
                result += chr(ord('a' if char.islower() else 'A') + ((ord(char) - ord('a')) % 26))
        else:
            result += char
    return result