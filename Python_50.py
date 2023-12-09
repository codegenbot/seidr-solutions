```
def decode_shift(s: str) -> str:
    print("Enter a string to decode: ")
    s = input()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s.split()])
```