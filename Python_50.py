def decode_shift():
    while True:
        shift = (
            input("Please enter 'encode' or 'decode', or 'q' to quit: ").strip().lower()
        )
        if shift == "q":
            break
        elif shift in ["encode", "decode"]:
            s = input(
                "Enter the string you'd like to {}:\n".format(
                    "encode" if shift == "encode" else "decode"
                )
            )
            if shift == "encode":
                try:
                    return "".join(
                        [
                            chr((ord(ch) - ord("a") + 3) % 26 + ord("a"))
                            for ch in s.lower()
                        ]
                    )
                except Exception as e:
                    print(f"An error occurred: {e}")
                    return None
            elif shift == "decode":
                try:
                    return "".join(
                        [
                            chr((ord(ch) - ord("a") - 3) % 26 + ord("a"))
                            for ch in s.lower()
                        ]
                    )
                except Exception as e:
                    print(f"An error occurred: {e}")
                    return None
        else:
            print("Invalid input. Please enter 'encode', 'decode' or 'q' to quit.")