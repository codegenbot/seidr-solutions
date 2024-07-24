def decode_shift():
    while True:
        print("Enter the shift amount: ")
        try:
            shift = int(input())
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    s = input().lower()
    return "".join([chr((ord(ch) - 97 - shift) % 26 + 97) if ch.isalpha() else ch for ch in s])