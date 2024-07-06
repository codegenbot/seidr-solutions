```def encode(message): 
    """Encode a given message according to the specific encoding rules."""
    result = "" 
    for char in message: 
        if char.isalpha(): 
            if char.lower() in "aeiou": 
                if (char.lower() == "a" or char.lower() == "e" or char.lower() == "i" or char.lower() == "o" or char.lower() == "u") and (char.lower() == "to" or char.lower() == "do"): 
                    result += "dQnT".upper() if char.isupper() else "dQnT" 
                elif (char.lower() == "r" or char.lower() == "o" or char.lower() == "t") and (char.lower() in ["re", "ro", "te"]): 
                    result += "gYkS".upper() if char.isupper() else "gYkS" 
                elif char.lower() == "s": 
                    result += "sWnT".upper() if char.isupper() else "sWnT" 
                else: 
                    if char.lower() in "aeiou": 
                        result += {"a": 'c', "e": 'g', "i": 'k', "o": 'q', "u": 'y'}[char.lower()].upper() if char.isupper() else {"a": 'c', "e": 'g', "i": 'k', "o": 'q', "u": 'y'}[char.lower()] 
                    else: 
                        result += char.swapcase().upper() if char.isupper() else char.swapcase() 
            else: 
                result += char.swapcase().upper() if char.isupper() else char.swapcase() 
        else: 
            result += char```