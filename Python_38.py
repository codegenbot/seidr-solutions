def decode_cyclic(s: str) -> str:
    n = len(s)
    groups = [s[i:i+3] for i in range(0, n, 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

if __name__ == "__main__":
    input_str = input().strip()
    if input_str:
        print(decode_cyclic(input_str))