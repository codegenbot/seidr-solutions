def shift_encrypt(text):
    result = ""

    for char in text:
        if char.isalpha():
            ascii_offset = ord("a") if char.islower() else ord("A")
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else:
            result += char

    return result


def main():
    s = input("Please enter the text to be encrypted: ")
    while True:
        if all(c.isalpha() for c in s):
            break
        else:
            print("Invalid input. Please enter a string containing only alphabets.")
    print(f"Encrypted Text: {shift_encrypt(s)}")


main()