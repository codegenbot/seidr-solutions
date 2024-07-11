def decode_shift(s: str):
    if not s.isalpha() or not s.islower():
        return "Input string should contain only lowercase alphabets"

    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

input_str = input("Enter the string to decode: ").strip()
result = decode_shift(input_str)
print(result)