def encrypt(s):
    return s.translate(
        str.maketrans(
            "abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyz"[: len(s)]
        )
    )