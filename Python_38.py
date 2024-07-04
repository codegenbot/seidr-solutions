def decode_cyclic(s: str) -> str:
    s = s.replace(" ", "")
    if not s:
        return s
    groups = [s[(3 * i): (3 * i + 3)] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

if __name__ == "__main__":
    import sys
    input_str = sys.stdin.read().strip()
    print(decode_cyclic(input_str))