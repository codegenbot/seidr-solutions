def decode_shift():
    while True:
        shift = input("Please enter 'encode' to encode the message or 'decode' to decode it: ").lower()
        if shift not in ["encode", "decode"]:
            print("Invalid input. Please enter 'encode' or 'decode'.")
        else:
            s = input("Enter the message you want to convert: ")
            if shift == "encode":
                try:
                    return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
                except Exception as e:
                    print(f"An error occurred: {e}")
                    return None
            elif shift == "decode":
                try:
                    return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()])
                except Exception as e:
                    print(f"An error occurred: {e}")
                    return None