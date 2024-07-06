def decode_shift(shift: str, s: str):
    if shift == "encode":
        try:
            return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
        except Exception as e:
            raise Exception(f"An error occurred: {str(e)}")
    elif shift == "decode":
        try:
            return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()])
        except Exception as e:
            raise Exception(f"An error occurred: {str(e)}")
    else:
        while True:
            user_shift = input("Please enter 'encode' or 'decode': ")
            if user_shift == "encode" or user_shift == "decode":
                break
            print("Invalid input. Please try again.")
        if user_shift == "encode":
            return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
        else:
            return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()])