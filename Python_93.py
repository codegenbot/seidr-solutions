```
def encode(message):
    """Encode a string based on certain rules"""
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.lower() == "do" or char.lower() == "to":
                    if char.isupper():
                        result += "DQN".upper()
                    else:
                        result += "dqn"
                elif char.lower() == "re" or char.lower() == "ro" or char.lower() == "te":
                    if char.isupper():
                        result += "GYKS".upper()
                    else:
                        result += "gyks"
                elif char.lower() == "se":
                    if char.isupper():
                        result += "SWNT".upper()
                    else:
                        result += "swnt"
                else:
                    if char.lower() in "aeiou":
                        if char.isupper():
                            result += {"a": 'c', "e": 'g', "i": 'k', "o": 'q', "u": 'y'}[char.lower()].upper()
                        else:
                            result += {"a": 'c', "e": 'g', "i": 'k', "o": 'q', "u": 'y'}[char.lower()]
                    else:
                        if char.isupper():
                            result += char.swapcase().upper()
                        else:
                            result += char.swapcase()
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:
            result += char