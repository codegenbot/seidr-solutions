def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                mapping = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}
                if char.isupper():
                    result += mapping[char.lower()].upper()
                else:
                    result += mapping[char.lower()]
            elif char.lower() == "re" or char.lower() == "ro" or char.lower() == "te":
                mapping = {"re": "gYkS", "ro": "gYkS", "te": "sWnT"}
                if char.isupper():
                    result += mapping[char.lower()].upper()
                else:
                    result += mapping[char.lower()]
            elif char.lower() == "se":
                mapping = {"se": "sWnT"}
                if char.isupper():
                    result += mapping[char.lower()].upper()
                else:
                    result += mapping[char.lower()]
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        elif char.isalnum():  
            if char.isupper():
                result += char.swapcase().upper()
            else:
                result += char.swapcase()
        else:  
            result += char
    return result