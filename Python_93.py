def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += char
            elif char.lower() == "a":
                result += "c" if char.isupper() else "c"
            elif char.lower() == "e":
                result += "g" if char.isupper() else "g"
            elif char.lower() == "i":
                result += "k" if char.isupper() else "k"
            elif char.lower() == "o":
                result += "q" if char.isupper() else "q"
            elif char.lower() == "u":
                result += "w" if char.isupper() else "w"
            else:
                result += (
                    chr((ord(char) - 97 + 3) % 26 + 97)
                    if char.islower()
                    else chr((ord(char) - 65 + 3) % 26 + 65)
                )
        else:
            result += char
    return result


print(encode(input("Enter the message: ")))