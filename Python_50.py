def decode_shift(s: str):
    if not s.islower():
        return "Input string must contain only lowercase alphabets."
        
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


input_str = input("Enter the string to decode: ").strip()
result = decode_shift(input_str)
print(result)