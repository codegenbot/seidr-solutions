def encrypt(s):
    result = ""
    shift = int(input("Enter shift value: "))
    for char in s:
        if char.isalpha():
            if char.isupper():
                offset = ord('A')
            else:
                offset = ord('a')
            result += chr((ord(char) - offset + shift) % 26 + offset)
        else:  
            result += char
    return result