```
def decode_shift(s: str):
    while True:
        shift = int(input("Enter the shift (0-25): "))
        if 0 <= shift <= 25:
            decoded = "".join([chr(((ord(ch) - ord('a') - shift) % 26) + ord('a')) for ch in s.lower()])
            print(decoded)
            cont = input("Do you want to decode another message? (yes/no): ")
            if cont.lower() != "yes":
                break
        else:
            print("Invalid input. Please enter a number between 0 and 25.")