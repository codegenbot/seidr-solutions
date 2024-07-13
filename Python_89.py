def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
        else:
            result += char
    return result