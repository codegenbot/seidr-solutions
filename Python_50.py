def decode_shift():
    shift = input("Enter 'encode' or 'decode': ")
    
    if shift == "encode" or shift == "decode":
        encode_or_decode = shift
        s = input(f"Enter the string to {encode_or_decode}: ")

        if encode_or_decode == "encode":
            try:
                return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
            except Exception as e:
                print(f"An error occurred: {e}")
                return None
        elif encode_or_decode == "decode":
            try:
                shift_amount = int(input("Enter the shift amount (1-25): "))
                if 1 <= shift_amount <= 25:
                    return "".join([chr((ord(ch) - ord("a") - shift_amount) % 26 + ord("a")) for ch in s.lower()])
                else:
                    print("Invalid shift amount. Please enter a number between 1 and 25.")
                    return None
            except Exception as e:
                print(f"An error occurred: {e}")
                return None
        else:
            raise Exception("Invalid input")
    else:
        raise Exception("Invalid input")