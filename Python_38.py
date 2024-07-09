def decode_cyclic(s: str):
    s = s.zfill(len(s) + len(s) % 3)
    result = ""
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(result) > 0 and result[-1] == chunk[0]:
            result += chunk[1]
        else:
            result += chunk
    return result

s = input()
print(decode_cyclic(s))