```
def encrypt(s):
    result = ""
    for i in range(len(s)):
        char = s[i]
        shift = 3
        if char.isupper():
            result += chr((ord(char) - 65 + shift) % 26 + 65)
        else:
            result += chr((ord(char) - 97 + shift) % 26 + 97)
    return result


def main():
    while True:
        try:
            s = input("Please enter the text to be encrypted: ")
            break
        except ValueError:
            print("Invalid input. Please enter a string containing only alphabets.")
    print(f"Encrypted Text: {encrypt(s)}")


main()