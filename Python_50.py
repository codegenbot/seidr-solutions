while True:
    shift = int(input("Enter the shift value: "))
    encoded_str = input("Enter the encoded string: ")

    result = ""
    try:
        for ch in encoded_str:
            if (
                not ch.isalnum()
                and not (ch >= "!" and ch <= "~")
                and not (ch >= "0" and ch <= "9")
            ):
                print(
                    "Invalid input. Please enter only alphanumeric characters and special characters."
                )
                raise ValueError
            if "A" <= ch <= "Z":
                result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
            elif "a" <= ch <= "z":
                result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
            else:
                if "!" <= ch <= "~":
                    result += chr((ord(ch) - ord("!") + shift) % 94 + ord("!"))
                elif "0" <= ch <= "9":
                    result += chr((ord(ch) - ord("0") + shift) % 10 + ord("0"))
                else:
                    result += ch
        break
    except ValueError:
        print(
            "Invalid input. Please enter only alphanumeric characters and special characters."
        )
print(result)