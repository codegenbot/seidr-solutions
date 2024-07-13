```
def encrypt(s):
    result = ""
    while True:
        try:
            shift = int(input("Enter shift value (0-25): "))
            if 0 <= shift <= 25:
                break
            else:
                print("Invalid input. Please enter a number between 0 and 25.")
        except ValueError:
            print("Invalid input. Please enter a number.")
    text = input("Enter the string to encrypt: ")
    if 0 <= shift <= 25:
        for char in text:
            if char.isalpha():
                if char.isupper():
                    offset = ord('A')
                else:
                    offset = ord('a')
                result += chr((ord(char) - offset + shift) % 26 + offset)
            else:  
                result += char
    else:
        print("Invalid input. Please enter a number between 0 and 25.")
    return result