```
def decode_cyclic(s: str):
    result = ""
    for c in s:
        count = 0
        temp = c
        while temp != c or count == 0:
            result += temp
            temp = (temp + 1) % len("abcdefghijklmnopqrstuvwxyz")
            count += 1
    return result