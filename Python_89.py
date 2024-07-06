
def encrypt(s):
    table = {
        "a": "e",
        "b": "f",
        ...
    }
    return "".join([table.get(c, c) for c in s])