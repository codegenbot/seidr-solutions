def encrypt(s):
    # Create a dictionary to map letters to their encrypted counterparts
    letter_map = {
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

    # Encrypt the input string using the letter_map dictionary
    encrypted = ""
    for char in s:
        if char.isalpha():
            encrypted += letter_map[char]
        else:
            encrypted += char

    return encrypted