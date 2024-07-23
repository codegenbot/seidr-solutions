```def decode_shift(s: str):
    while True:
        try:
            shift = int(input("Enter the shift value: "))
            break
        except ValueError:
            print("Invalid input! Please enter an integer.")
    text_to_decode = input("Enter text to decode: ")
    return "".join(
        [
            (
                chr(
                    ((ord(ch.lower()) - ord("a") + shift) % 26)
                    + (ch.isalpha() and "a" or "")
                )
                if ch.isalpha()
                else ch
            )
            for ch in text_to_decode.lower()
        ]
    )