def decode_cyclic(s: str) -> str:
    s = s.replace(" ", "")

    if not s:
        return s

    groups = [s[i:i + 3] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]

    return " ".join(groups)

if __name__ == "__main__":
    input_str = input().strip()
    print(decode_cyclic(input_str))