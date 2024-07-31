def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char in vowels:
                index = (vowels.index(char) + 2) % 6
                result += vowels[index]
            else:
                if char.isupper():
                    result += chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
                else:
                    result += chr((ord(char) - ord('a') + 1) % 26 + ord('a'))
        else:
            result += char
    return result