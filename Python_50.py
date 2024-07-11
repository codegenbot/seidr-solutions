```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') - 25) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') - 25) % 26 + ord('A'))
        else:
            result += ch
    return result

s = input("Enter a string: ")
print(decode_shift(s))