def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2 * 2 :] + alphabet[: 2 * 2]
    result = ""
    for char in s:
        if char.isalpha():
            index = ord(char.lower()) - 97
            result += rotated_alphabet[index]
        else:
            result += char
    return result