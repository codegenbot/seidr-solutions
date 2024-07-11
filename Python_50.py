```python
def decode_shift():
    s = input("Please enter a string: ")
    while True:
        try:
            shift = int(input("Enter the shift value (0-25): "))
            if 0 <= shift <= 25:
                break
            else:
                print("Please enter a value between 0 and 25.")
        except ValueError:
            print("That's not an integer! Try again.")
    decoded = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                decoded += chr((ord(ch) - ord('a') + shift) % 26 + ord('a'))
            else:
                decoded += chr((ord(ch) - ord('A') + shift) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded

print(decode_shift())