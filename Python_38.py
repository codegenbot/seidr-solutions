def decode_cyclic(s: str):
    padding = (3 - len(s) % 3) % 3
    s += " " * padding
    groups = [s[i : i + 3][::-1] for i in range(0, len(s), 3)]
    return "".join(groups[::-1])


s = input()
result = decode_cyclic(s)
print(result)