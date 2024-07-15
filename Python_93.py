def encode(message):
    vowels = set("aeiouAEIOU")
    return "".join([
        chr(((ord(char.upper()) - ord("A") + 2) % 26) + ord("A")).swapcase() if char.isalpha() and char.lower() not in vowels else char
        if char.isalpha() else char
        for char in message
    ])