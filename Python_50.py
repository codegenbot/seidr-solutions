```
def decode_shift(encoded):
    for i in range(26):
        result = "".join([chr((ord(ch) - ord('a' + (i % 26))) % 26 + ord('a')) if ch.isalpha() and ch.islower() else 
                          chr((ord(ch) - ord('A') + (i % 26)) % 26 + ord('A')) if ch.isalpha() and ch.isupper() else 
                          ch for ch in encoded])
        if 'z' not in result and 'Z' not in result:
            return result
    return "No solution"