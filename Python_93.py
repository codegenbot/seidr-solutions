def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiouAEIOU'.index(char.lower()) <= 3:
                if char.isupper():
                    result += chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
                else:
                    result += chr((ord(char) - ord('a') + 1) % 26 + ord('a'))
            elif 'aeiouAEIOU'.index(char.lower()) >= 4 and 'aeiouAEIOU'.index(char.lower()) <= 5:
                if char.isupper():
                    result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
                else:
                    result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += char
        else:
            result += char
    return result