def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Test case 1
assert decode_shift("hello") == "abcdef"

# Test case 2
assert decode_shift("world") == "cdefgh"

# Test case 3
assert decode_shift("python") == "abcdefghijklmnopqrstuvwxyz"