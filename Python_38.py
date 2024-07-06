def decode_cyclic(s: str):
    groups = [
        s[i : i + 3][::-1] if len(s) >= i + 3 else s[i:] for i in range(0, len(s), 3)
    ]
    return "".join(groups)