def decode_shift(s: str):
    while True:
        shift = int(input("Enter the shift (0-25): "))
        decoded = "".join([chr(((ord(ch) - ord('a') - shift) % 26) + ord('a')) for ch in s])
        print(decoded)
        cont = input("Do you want to decode another message? (yes/no): ")
        if cont.lower() != "yes":
            break