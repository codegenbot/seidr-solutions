def decode_shift(s: str, shift: int):
    return "".join([chr(((ord(ch) - shift - ord("a")) % 26) + ord("a")) for ch in s])

s = input("Enter the string: ")
shift = int(input("Enter the shift value: "))
result = decode_shift(s, shift)
print(result)