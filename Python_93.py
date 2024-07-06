```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if (char.lower() == "do" or char.lower() == "to") and char.isupper():
                    result += "DQnT".upper()
                elif (char.lower() == "re" or char.lower() == "ro" or char.lower() == "te") and char.isupper():
                    result += "GYkS".upper()
                elif char.lower() == "se" and char.isupper():
                    result += "sWnT".upper()
                else:
                    if char.lower() in "aeiou":
                        if char.isupper():
                            result += {
                                "a": "c",
                                "e": "g",
                                "i": "k",
                                "o": "q",
                                "u": "y",
                            }[char.lower()].upper()
                        else:
                            result += {
                                "a": "c",
                                "e": "g",
                                "i": "k",
                                "o": "q",
                                "u": "y",
                            }[char.lower()]
                    else:
                        if char.isupper():
                            result += char.swapcase().upper()
                        else:
                            result += char.swapcase()
            elif char.isalnum() and char.isalpha():
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:
            result += char

    return result