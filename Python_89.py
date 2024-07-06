def encrypt(s):
    # Create a dictionary to map letters to their encrypted values
    letter_map = {
        "a": "e",
        "b": "f",
        "c": "g",
        "d": "h",
        "e": "i",
        "f": "j",
        "g": "k",
        "h": "l",
        "i": "m",
        "j": "n",
        "k": "o",
        "l": "p",
        "m": "q",
        "n": "r",
        "o": "s",
        "p": "t",
        "q": "u",
        "r": "v",
        "s": "w",
        "t": "x",
        "u": "y",
        "v": "z",
        "w": "a",
        "x": "b",
        "y": "c",
        "z": "d",
    }

    # Encrypt the input string using the dictionary
    encrypted_string = ""
    for letter in s:
        encrypted_string += letter_map[letter]

    return encrypted_string