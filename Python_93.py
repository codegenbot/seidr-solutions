```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()].upper() if char.isupper() else {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()]
            elif char.isalnum():
                result += "dQnT" if (char.lower() in "re" or char.lower() == "to") else "gYkS" if (char.lower() == "ro" or char.lower() == "te") else ("sWnT" if char.lower() == "se" else char.swapcase())
            else:
                result += char
        else:
            result += char
    return result