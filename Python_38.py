def decode_cyclic():
    def check(n):
        if n < 26:
            return chr(64 + n)
        else:
            return chr((n - 26) % 26 + 64)

    return check