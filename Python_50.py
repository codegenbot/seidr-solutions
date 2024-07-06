def decode_shift():
    while True:
        shift = input("Enter 'encode' or 'decode': ")

        if shift == "encode" or shift == "decode":
            break
        else:
            raise Exception("Invalid input. Please enter 'encode' or 'decode'.")

    if shift == "encode":
        return "".join(
            [
                chr((ord(ch) - ord("a") + 3) % 26 + ord("a"))
                for ch in input("Enter the string: ").lower()
            ]
        )
    elif shift == "decode":
        return "".join(
            [
                chr((ord(ch) - ord("a") - 3) % 26 + ord("a"))
                for ch in input("Enter the string: ").lower()
            ]
        )