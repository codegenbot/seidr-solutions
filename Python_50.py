def decode_shift(s: str):
    while True:
        shift = int(input("Enter the shift (0-25): "))
        decoded = ""
        for ch in s:
            if ch.isalpha():
                ascii_offset = 97 if ch.islower() else 65
                decoded += chr((ord(ch) - ascii_offset - shift) % 26 + ascii_offset)
            else:
                decoded += ch
        print(decoded)
        cont = input("Do you want to decode another message? (yes/no): ")
        if cont.lower() != "yes":
            break