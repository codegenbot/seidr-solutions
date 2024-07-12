def decode_shift():
    while True:
        s = input("Enter the message (use 'stop' if no more messages): ")
        if s.lower() == "stop":
            break
        shift = int(input("Enter the shift (0-25): "))
        while True:
            try:
                if 0 <= shift <= 25:
                    break
                else:
                    print("Invalid input. Please enter a number between 0 and 25.")
            except ValueError:
                print("Invalid input. Please enter an integer.")
        decoded = "".join([chr(((ord(ch) - ord('a') - shift) % 26) + ord('a')) for ch in s.lower()])
        print(decoded)
        cont = input("Do you want to decode another message? (yes/no): ")
        while True:
            if cont.lower() == "yes":
                break
            elif cont.lower() == "no":
                return
            else:
                print("Invalid input. Please enter 'yes' or 'no'.")