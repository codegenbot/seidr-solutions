def encrypt(s):
    # Create a dictionary to map each letter to its encrypted version
    enc_dict = {
        "a": "c",
        "b": "d",
        "c": "e",
        "d": "f",
        "e": "g",
        "f": "h",
        "g": "i",
        "h": "j",
        "i": "k",
        "j": "l",
        "k": "m",
        "l": "n",
        "m": "o",
        "n": "p",
        "o": "q",
        "p": "r",
        "q": "s",
        "r": "t",
        "s": "u",
        "t": "v",
        "u": "w",
        "v": "x",
        "w": "y",
        "x": "z",
        "y": "a",
        "z": "b",
    }

    # Encrypt the input string by replacing each letter with its encrypted version
    enc_s = ""
    for c in s:
        if c.isalpha():
            enc_s += enc_dict[c]
        else:
            enc_s += c

    return enc_s