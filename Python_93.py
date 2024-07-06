Here is the corrected and formatted code:

```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.lower() in {"do", "to"}:
                    result += "DQnT" if char.isupper() else "dQnT"
                elif char.lower() in {"re", "ro", "te"}:
                    result += "GYkS" if char.isupper() else "gYkS"
                elif char.lower() == "se":
                    result += "SWnT" if char.isupper() else "sWnT"
                else:
                    if char.lower() in "aeiou":
                        result += {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()]\
                            .upper() if char.isupper() else {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}[char.lower()]
                    else:
                        result += char.swapcase().upper() if char.isupper() else char.swapcase()
        elif char.isalnum():
            result += char.swapcase().upper() if char.isupper() else char.swapcase()
        else:
            result += char
    return result