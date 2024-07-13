```
def read_input():
    s = input("Enter a string: ")
    return s

def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            offset = 65 if char.isupper() else 97
            result += chr((ord(char) - offset + 3) % 26 + offset)
        else:  
            if char.isdigit():  
                result += char
            elif char in '/.:!?,";\'-_':
                result += char
            else:
                result += char  
    return result

s = read_input()
print(encrypt(s))