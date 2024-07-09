```
def decode_shift():
    while True:
        try:
            shift = int(input("Enter the shift value (0-25): "))
            if 0 <= shift <= 25:
                break
            else:
                print("Invalid input! Shift should be between 0 and 25. Try again.")
        except ValueError:
            print("Invalid input! Please enter a number. Try again.")

    while True:
        try:
            s = input("Enter the encoded string: ")
            if all(c.isalpha() or c.isspace() for c in s):
                break
            else:
                print("Invalid input! String should only contain alphabets and spaces. Try again.")
        except ValueError:
            pass

    decoded_s = ""
    for ch in s:
        if ch.isalpha():
            if ch.isupper():
                decoded_s += chr(((ord(ch) - ord('A')) - shift) % 26 + ord('A'))
            else:
                decoded_s += chr(((ord(ch) - ord('a')) - shift) % 26 + ord('a'))
        else:
            decoded_s += ch
    return decoded_s

print(decode_shift())