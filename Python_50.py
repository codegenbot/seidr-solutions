def decode_shift():
    s = input("Choose 'encode' or 'decode': ")
    if s == "encode":
        return "".join(
            [
                chr((ord(ch) - ord("a") + 3) % 26 + ord("a"))
                for ch in input("Enter the string: ")
            ]
        )
    elif s == "decode":
        return "".join(
            [
                chr((ord(ch) - ord("a") - 3) % 26 + ord("a"))
                for ch in input("Enter the string: ")
            ]
        )
    else:
        return "".join(
            [
                chr((ord(ch) - ord("a") - 1) % 26 + ord("a"))
                for ch in input("Enter the string: ")
            ]
        )


print(decode_shift())