def decode_shift():
    s = input("Enter a string to shift: ")
    n = int(input("Enter the number of positions to shift: "))
    result = ""
    while True:
        for char in s:
            if char.isalpha():
                ascii_offset = 65 if char.isupper() else 97
                result += chr((ord(char) - ascii_offset + n) % 26 + ascii_offset)
            else:
                result += char
        print(result)
        break