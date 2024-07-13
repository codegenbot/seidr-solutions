```
def encrypt(s, shift):
    result = ""
    for char in s:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + shift) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + shift) % 26 + ord('a'))
        else:  
            result += char
    return result

text = input("Please enter the text to be encrypted: ")
while True:
    shift = int(input("Enter shift value (0-25): "))
    if 0 <= shift <= 25:
        break
    else:
        print("Invalid input. Please enter a number between 0 and 25.")
encrypted_text = encrypt(text, shift)
print(f"Encrypted Text: {encrypted_text}")