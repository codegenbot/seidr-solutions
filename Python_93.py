```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += {**{("a": "c", "e": "g", "i": "k", "o": "q", "u": "y").fromkeys(("a", "e", "i", "o", "u"))}.get(char.lower(), char.swapcase())
            elif char.lower() in ["do", "to"]:
                result += {**{("d", "t"): ["dQnT"], ("r", "o", "t"): ["gYkS"], ("s"): ["sWnT"]}.get(char.lower(), char.swapcase())
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:  
            result += char

    return result