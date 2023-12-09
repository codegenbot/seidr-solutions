```
def decode_shift(s: str) -> str:
    s = s.split()
    new_s = []
    for ch in s:
        if ord(ch) >= ord("a") and ord(ch) <= ord("z"):
            new_s.append(chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")))
        else:
            new_s.append(ch)
    return "".join(new_s)
```