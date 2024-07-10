def decode_shift():
    if __name__ == "__main__":
        result = ""
        while True:
            s = input("Enter a string to shift (or 'q' to quit): ")
            if s.lower() == "q":
                break
            n = ""
            while n.isdigit() == False:
                try:
                    n = int(input("Enter the number of positions to shift: "))
                except ValueError:
                    print("Invalid input. Please enter an integer.")
            for char in s:
                if char.isalpha():
                    ascii_offset = 65 if char.isupper() else 97
                    result += chr((ord(char) - ascii_offset + n) % 26 + ascii_offset).upper() if char.isupper() else chr((ord(char) - ascii_offset + n) % 26 + ascii_offset).lower()
                else:
                    result += char
            print(result)