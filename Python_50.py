def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s if ch.isalpha()])

input_str = input().strip()
if all(char.isalpha() or char.isspace() or char.isdigit() or char == "!" for char in input_str):
    result = decode_shift(input_str)
    print(result)