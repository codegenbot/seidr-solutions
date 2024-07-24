```
def encode(message):
    result = ""
    for char in message:
        if char == " ":
            result += " "
        elif char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord("A") + 3) % 26 + ord("A"))
            else:
                temp = chr((ord(char) - ord("a") + 3) % 26 + ord("a"))
                if result and not result[-1].isalpha() or result[-1].isupper() != char.isupper():
                    temp = temp.upper() if char.islower() else temp.lower()
                result += temp
        else:
            result += char
    return result