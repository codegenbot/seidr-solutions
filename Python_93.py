Here is the corrected code:

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
                elif (
                    char.lower() == "re" or char.lower() == "ro" or char.lower() == "te"
                ):
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
            elif char.isalnum():  # Check if the character is alphanumeric
                if char.isupper():
                    result += char
                else:
                    result += char
            result += char
        else:  # Add this block to check for non-alphanumeric characters
            if char.isprintable():  # Check if the character is printable
                result += char
            else:  # Handle non-printable characters (like spaces, punctuation)
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()

    return result