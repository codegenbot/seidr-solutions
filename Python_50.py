```
def decode_shift(s: str):
    n = int(input("Enter the shift value (1-25): "))
    while not 1 <= n <= 25:
        print("Invalid input. Please enter a number between 1 and 25.")
        n = int(input("Enter the shift value (1-25): "))
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - n) % 26) + ascii_offset)
        else:
            result += ch
    return result