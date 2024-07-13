def main():
    s = input("Please enter the text to be encrypted: ")
    while True:
        if all(c.isalpha() for c in s):
            break
        else:
            print("Invalid input. Please enter a string containing only alphabets.")
    print(f"Encrypted Text: {encrypt(s)}")


main()