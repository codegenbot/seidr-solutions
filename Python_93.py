```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.isupper():
                    result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}["a" if char.lower() == "a" else "e" if char.lower() == "e" else "i" if char.lower() == "i" else "o" if char.lower() == "o" else "u"].upper()
                else:
                    result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}["a" if char.lower() == "a" else "e" if char.lower() == "e" else "i" if char.lower() == "i" else "o" if char.lower() == "o" else "u"]
            elif char.isalnum():
                result += "dQnT" if (char.lower() in "re" or char.lower() == "to") else "gYkS" if (char.lower() == "ro" or char.lower() == "te") else ("sWnT" if char.lower() == "se" else char.swapcase())
            else:
                result += char
        else:
            result += char
    return result