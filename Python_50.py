def decode_shift():
    shift = input("Enter 'encode' or 'decode': ")

    while True:
        s = input("Enter the string: ")

        if shift.lower() in ["encode", "decode"]:
            break
        else:
            raise Exception("Invalid input. Please enter 'encode' or 'decode'.")

    if shift.lower() == "encode":
        return "".join(
            [chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()]
        )
    elif shift.lower() == "decode":
        return "".join(
            [chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()]
        )