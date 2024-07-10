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
            ascii_offset = 65 if s.isupper() else 97
            for char in s:
                if char.isalpha():
                    result += chr((ord(char) - ascii_offset + n) % 26 + ascii_offset)
                else:
                    result += char
            print(result)