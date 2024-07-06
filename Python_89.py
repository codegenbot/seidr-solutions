def encrypt(s):
    # Pad the shorter argument with spaces
    s = s.rjust(len("abcdefghijklmnopqrstuvwxyz"), " ")
    table = str.maketrans(
        "abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyz"[: len(s)]
    )
    return s.translate(table)