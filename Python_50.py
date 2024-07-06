def decode_shift():
    while True:
        s = input("Enter 'encode', 'decode', or 'quit': ")
        if s == "encode":
            return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in input("Enter the message to encode: ")])
        elif s == "decode":
            return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in input("Enter the message to decode: ")])
        elif s.lower() == 'quit':
            print("Goodbye!")
            exit()
        else:
            print("Invalid choice. Please choose 'encode', 'decode', or 'quit'")