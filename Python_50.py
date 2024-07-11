def decode_shift(s: str):
    if not all(ch.isalpha() or ch == " " for ch in s):
        print("Input string should contain only lowercase alphabets and spaces.")
        return ""

    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )


input_str = input("Enter the string to decode: ").strip()
result = decode_shift(input_str)
print(result)