```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.isupper():
                    result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()].upper()
                else:
                    result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()]
            elif char.isalnum():
                if (char.lower() in "re" or char.lower() == "to"):
                    result += "dQnT"
                elif char.lower() == "ro" or char.lower() == "te":
                    result += "gYkS"
                else:
                    result += "sWnT" if char.lower() == "se" else char.swapcase()
            else:
                result += char
        else:
            result += char
    return result