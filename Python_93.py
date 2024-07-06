```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if (char.lower() == "a" or char.lower() == "e" or char.lower() == "i" or char.lower() == "o" or char.lower() == "u"):
                    if char.isupper():
                        result += ("c" if char.lower() == "a" else "g" if char.lower() == "e" else "k" if char.lower() == "i" else "q" if char.lower() == "o" else "y").upper()
                    else:
                        result += ("c" if char.lower() == "a" else "g" if char.lower() == "e" else "k" if char.lower() == "i" else "q" if char.lower() == "o" else "y")
                elif char.lower() in ["do", "to"]:
                    if char.isupper():
                        result += "dQnT".upper()
                    else:
                        result += "dQnT"
                elif char.lower() in ["re", "ro", "te"]:
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