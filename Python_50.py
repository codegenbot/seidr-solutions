```
def decode_shift():
    while True:
        try:
            shift = int(input("Enter the shift amount (0-25): "))
            if not 0 <= shift <= 25:
                print("Invalid input. Please enter a number between 0 and 25.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    s = input().lower()

    if not set(s).issubset('abcdefghijklmnopqrstuvwxyz'):
        return "".join([ch for ch in s])
    else:
        return "".join([chr((ord(ch) - 97 - shift) % 26 + 97) if ch.isalpha() else ch for ch in s])