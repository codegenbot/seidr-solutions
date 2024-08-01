def decode_shift(s: str):
    s = s.lower()
    if not s.islower():
        return "Please enter a string of lowercase letters only."
    
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_string = input("Enter the string to decode: ")

print(decode_shift(input_string))