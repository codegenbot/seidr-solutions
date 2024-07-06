```
def encode(message):
    result = ""
    vowels = {"a": "c", "e": "g", "i": "k", "o": "q", "u": "y"}
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if (char.lower(), char.isupper()) in {("do", True), ("to", True)}:
                    result += "dQnT".upper() if char.isupper() else "dQnT"
                elif (char.lower(), char.isupper()) in {("re", True), ("ro", True), ("te", True)}:
                    result += "gYkS".upper() if char.isupper() else "gYkS"
                elif (char.lower(), char.isupper()) == ("se", True):
                    result += "sWnT".upper()
                else:
                    result += vowels.get(char.lower()).upper() if char.isupper() else vowels.get(char.lower())
            else:
                result += char.swapcase()
        else:
            result += char
    return result