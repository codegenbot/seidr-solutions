def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

s = input()
choice = input()

if choice.lower() == "e":
    result = encode_shift(s)
    print(result)
elif choice.lower() == "d":
    result = decode_shift(s)
    print(result)
else:
    print("Invalid choice.")