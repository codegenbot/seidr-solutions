def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    shifted_alphabet = alphabet[2 * 2 :] + alphabet[: 2 * 2]
    result = ""
    for char in s:
        if char.isalpha():
            index = (alphabet.index(char.lower()) - 2 * 2) % 26
            result += (
                shifted_alphabet[index].upper()
                if char.isupper()
                else shifted_alphabet[index]
            )
        else:
            result += char
    return result