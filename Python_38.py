def decode_cyclic(s: str):
    groups = [
        s[i : i + 3][::-1] if len(s) >= i + 3 else s[i:]
        for i in range((len(s) + 2) // 3)
    ]
    return "".join(groups)