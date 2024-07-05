def decode_shift(s: str) -> str:
    result = []
    for ch in s:
        if ch.isalpha():
            base = ord('a') if ch.islower() else ord('A')
            decoded_char = chr(((ord(ch) - base - 5) % 26) + base)
            result.append(decoded_char)
        else:
            result.append(ch)
    return "".join(result)

input_str = input().strip()
print(decode_shift(input_str))