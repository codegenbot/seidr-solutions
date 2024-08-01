def decode_shift(s: str):
    s = s.lower()
    if not s.islower():
        return "Input should contain only lowercase letters"
    
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_string = input("Enter the string to decode (lowercase letters only): ")

print(decode_shift(input_string))