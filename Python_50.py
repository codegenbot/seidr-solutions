def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") if ch.isalpha() else ord(ch) for ch in s])

input_str = input()
result = decode_shift(input_str)
print(result)