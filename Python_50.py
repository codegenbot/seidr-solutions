def decode_shift():
    shift = input("Enter 'encode' or 'decode': ")
    while True:
        try:
            amount = int(input("Enter the shift amount (1-25): "))
            if 0 < amount < 26:
                s = input("Enter the string: ")

                if shift == "encode":
                    return "".join([chr((ord(ch) - ord("a") + amount) % 26 + ord("a")) for ch in s.lower()])
                elif shift == "decode":
                    return "".join([chr((ord(ch) - ord("a") - amount) % 26 + ord("a")) for ch in s.lower()])
            else:
                print("Invalid input. Please enter a number between 1 and 25.")
        except ValueError:
            print("Invalid input. Please enter an integer.")