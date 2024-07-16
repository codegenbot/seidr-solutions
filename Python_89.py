def encrypt(s):
    encrypted = ''
    for char in s:
        if char.isalpha():
            shift = 2 * ord(char.lower()) - ord('a')
            encrypted += chr((shift % 26) + ord('a')) if char.islower() else chr((shift % 26) + ord('A'))
        else:
            encrypted += char
    return encrypted