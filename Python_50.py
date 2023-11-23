def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

s = input()
operation = input()
if operation == "encode":
    result = encode_shift(s)
elif operation == "decode":
    result = decode_shift(s)
else:
    result = "Invalid operation"

print(result)