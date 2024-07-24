def decode_shift():
    shift = int(input("Enter the shift amount: "))
    s = input()
    return "".join([chr((ord(ch) - 97 - shift) % 26 + 97) if 'a' <= ch <= 'z' else ch for ch in s]).lower()