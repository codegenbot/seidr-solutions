```
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
        raise Exception("Invalid input")

def main():
    shift_type = input("Enter 'encode' or 'decode': ")
    s = input("Enter the string: ")

    try:
        if shift_type == "encode":
            print(decode_shift(shift_type, s))
        elif shift_type == "decode":
            print(decode_shift(shift_type, s))
        else:
            print("Invalid input")
    except Exception as e:
        print(f"An error occurred: {str(e)}")

if __name__ == "__main__":
    main()