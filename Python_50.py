```diff
def decode_shift(s: str) -> str:
    if not s:
        raise ValueError("Input cannot be empty")
    decoded = ""
    for ch in s:
        if ch.isalpha():
            decoded += chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
        else:
            decoded += ch
    return decoded
```