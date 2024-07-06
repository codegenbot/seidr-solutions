def decode_shift():
    shift = input("Enter 'encode' or 'decode': ")

    while True:
        s = input("Enter the string: ")

        if shift == "encode" or shift == "decode":
            break
        else:
            raise Exception("Invalid input. Please enter 'encode' or 'decode'.")

    while True:
        s = input("Enter the string (type 'quit' or 'q' to finish): ")

        if s.lower() == "quit" or s.lower() == "q":
            break
        elif shift == "encode":
            print(
                "".join(
                    [chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()]
                )
            )
        elif shift == "decode":
            print(
                "".join(
                    [chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()]
                )
            )