while True:
    s_type = input("Enter 'encode' or 'decode': ").lower()
    if s_type in ["encode", "decode"]:
        break
    else:
        print("Please enter either 'encode' or 'decode'")

s = input("Enter the string: ")

if s_type == "encode":
    return "".join([chr((ord(ch) - ord("a") + 3) % 26 + ord("a")) for ch in s.lower()])
elif s_type == "decode":
    return "".join([chr((ord(ch) - ord("a") - 3) % 26 + ord("a")) for ch in s.lower()])