def decode_cyclic(s: str) -> str:
    groups = [s[i:i + 3] for i in range(0, len(s), 3)]
    shifted_groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(shifted_groups)

if __name__ == "__main__":
    s = input().strip()
    print(decode_cyclic(s))