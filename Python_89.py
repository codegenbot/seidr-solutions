```
def encrypt(s):
    while True:
        s = input("Enter text to be encrypted: ")
        if all(c.isalpha() for c in s):
            break
        else:
            print("Invalid input. Please enter a string containing only alphabets.")
    shift = int(input("Enter shift value (0-25): "))
    while True:
        try:
            if 0 <= shift <= 25:
                break
            else:
                print("Invalid input. Please enter a number between 0 and 25.")
        except ValueError:
            print("Invalid input. Please enter a number.")
    text = s
    result = ""
    for char in text:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + shift) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + shift) % 26 + ord('a'))
        else:  
            result += char
    return result

encrypted_text = encrypt(input("Please enter the text to be encrypted: "))
print(f"Encrypted Text: {encrypted_text}")