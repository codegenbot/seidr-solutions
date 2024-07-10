input_string = input("Please enter a string:").strip()

def decode_shift(s: str):
    if not s:
        return "No input provided"
    
    shift = str.maketrans("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", "vwxyzabcdefghijklmnopqrstuvWXYZABCDEFGHIJKLMNOPQRSTU")
    return s.translate(shift)

result = decode_shift(input_string)
print(result)