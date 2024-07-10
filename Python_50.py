```Python
def decode_shift():
    s = input("Enter the text: ")
    shift_value = int(input("Enter the shift value: "))
    
    result = ""
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + shift_value) % 26 + ascii_offset)
        else:
            result += char
    
    return result

while True:
    print(decode_shift())