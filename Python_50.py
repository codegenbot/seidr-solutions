def decode_shift():
    while True:
        s = input("Enter a string to shift (or 'q' to quit): ")
        if s.lower() == "q":
            break
        n = int(input("Enter the number of positions to shift: "))
        result = ""
        ascii_offset = 65 if s.isupper() else 97
        for char in s:
            if char.isalpha():
                if char.isupper():
                    result += chr((ord(char) - ascii_offset + n) % 26 + ascii_offset)
                else:
                    result += chr((ord(char) - ascii_offset + n) % 26 + ascii_offset).lower()
            else:
                result += char
        print(result)

if __name__ == "__main__":
    decode_shift()