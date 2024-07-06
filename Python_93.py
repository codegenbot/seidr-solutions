def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += {c: c.upper() if c.isupper() else c.lower() for c in "aeiou"}[char.lower()]
            elif char.isalnum():
                result += "dQnT" if (char.lower() in "re" or char.lower() == "to") else "gYkS" if (char.lower() == "ro" or char.lower() == "te") else ("sWnT" if char.lower() == "se" else char.swapcase())
            else:
                result += char
        else:
            result += char
    return result