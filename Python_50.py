def decode_shift(shift: str, s: str):
    if shift == "encode":
        try:
            return "".join(
                [chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()]
            )
        except Exception as e:
            print(f"An error occurred: {e}")
            return None
    elif shift == "decode":
        try:
            return "".join(
                [chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()]
            )
        except Exception as e:
            print(f"An error occurred: {e}")
            return None
    else:
        raise Exception("Invalid input")