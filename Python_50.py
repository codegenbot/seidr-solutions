```
def decode_shift():
    while True:
        try:
            shift = int(input("Enter the shift amount: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    while True:
        s = input().lower()
        
        if not set(s).issubset('abcdefghijklmnopqrstuvwxyz'):
            print("Please provide some text to decode.")
        else:
            while True:
                try:
                    choice = input("Do you want to continue? (yes/no): ").lower()
                    break
                except ValueError:
                    print("Invalid input. Please enter 'yes' or 'no'.")

            if choice == "yes":
                return "".join([chr((ord(ch) - 97 - shift) % 26 + 97) if ch.isalpha() else ch for ch in s])
            elif choice == "no":
                print("Program terminated.")
                exit()