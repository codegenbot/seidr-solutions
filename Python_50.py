def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Add input/output statements
s = input("Enter the string: ")
operation = input("Enter the operation (encode/decode): ")
if operation == "encode":
    result = encode_shift(s)
elif operation == "decode":
    result = decode_shift(s)
else:
    result = "Invalid operation"

print(result)