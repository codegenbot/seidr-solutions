def decode_cyclic(s: str):
    decoded = ""
    prefix = s[:len(s)//2]
    for char in s:
        if char in prefix:
            decoded += char
        else:
            decoded += prefix[-1]
    return decoded