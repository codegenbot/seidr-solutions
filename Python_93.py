```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.lower() == "do" or char.lower() == "to":
                    if char.isupper():
                        result += "dQnT".upper()
                    else:
                        result += "dQnT"
                elif char.lower() == "re" or char.lower() == "ro" or char.lower() == "te":
                    if char.isupper():
                        result += "gYkS".upper()
                    else:
                        result += "gYkS"
                elif char.lower() == "se":
                    if char.isupper():
                        result += "sWnT".upper()
                    else:
                        result += "sWnT"
                else:
                    if char.lower() in "aeiou":
                        if char.isupper():
                            result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()].upper()
                        else:
                            result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()]
                    else:
                        if char.isupper():
                            result += char.swapcase()
                        else:
                            result += char
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:
            result += char