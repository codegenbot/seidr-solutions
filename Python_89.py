```
def encrypt(s):
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

shift = int(input("Enter shift value (0-25): "))
while True:
    try:
        if 0 <= shift <= 25:
            break
        else:
            print("Invalid input. Please enter a number between 0 and 25.")
    except ValueError:
        print("Invalid input. Please enter a number.")

encrypted_text = encrypt(input("Enter text to be encrypted: "))
print(f"Encrypted Text: {encrypted_text}")