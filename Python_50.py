def decode_shift():
    shift = input("Enter 'encode' or 'decode': ")
    if shift == "encode" or shift == "decode":
        s = input("Enter the string: ")
    else:
        raise Exception("Invalid input. Please enter 'encode' or 'decode'.")

    if shift == "encode":
        return "".join(
            [chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()]
        )
    elif shift == "decode":
        return "".join(
            [chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()]
        )