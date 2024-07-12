```
def decode_shift(s: str):
    while True:
        while True:
            try:
                shift = int(input("Enter the shift (0-25): "))
                if 0 <= shift <= 25:
                    break
                else:
                    print("Invalid shift. Please enter a value between 0 and 25.")
            except ValueError:
                print("Invalid input. Please enter an integer.")
        
        decoded = "".join([chr(((ord(ch) - ord('a') - shift) % 26) + ord('a')) for ch in s])
        print(decoded)
        cont = input("Do you want to decode another message? (yes/no): ")
        if cont.lower() != "yes":
            break