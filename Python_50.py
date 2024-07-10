```
def decode_shift():
    s = input("Enter the text you want to decode: ")
    n = int(input("Enter the shift value (1-25): "))
    while not (1 <= n <= 25) or not isinstance(n, int):
        print("Invalid input! Please enter an integer between 1 and 25.")
        n = int(input("Enter the shift value (1-25): "))
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - n) % 26) + ascii_offset)
        else:
            result += ch
    return result

print(decode_shift())