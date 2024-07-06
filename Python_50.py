```
def decode_shift():
    while True:
        s_type = input("Enter 'encode' or 'decode': ").lower()
        if s_type in ['encode', 'decode']:
            break
        else:
            print("Please enter either 'encode' or 'decode'")

    s = input("Enter the string: ")

    if s_type == "encode":
        try:
            return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
        except Exception as e:
            print(f"An error occurred: {e}")
            return None
    elif s_type == "decode":
        try:
            return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()])
        except Exception as e:
            print(f"An error occurred: {e}")
            return None