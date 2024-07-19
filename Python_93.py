def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "Z":
                    result += "A"
                else:
                    result += chr(ord(char) + 1)
            elif char.islower():
                if char == "z":
                    result += "a"
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    vowels = "aeiouAEIOU"
    for i in range(len(result)):
        if result[i] in vowels:
            if result[i].isupper():
                index = ord(result[i]) - ord("A")
                result = result[:i] + chr((index + 2) % 26 + ord("A")) + result[i + 1 :]
            else:
                index = ord(result[i]) - ord("a")
                result = result[:i] + chr((index + 2) % 26 + ord("a")) + result[i + 1 :]
    return result