def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )

try:
    input_str = input("Enter a string to decode: ").strip()
    result = decode_shift(input_str)
    print(result)
except:
    print("Invalid input. Please provide a valid string.")