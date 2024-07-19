```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    result += chr((ord('A') + (ord(char) - ord('A')) % 26 - 2) if (char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u') else (ord('A') + (ord(char) - ord('A')) % 26 - 1)
                else:
                    result += chr((ord('a') + (ord(char) - ord('a')) % 26 - 2) if (char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u') else (ord('a') + (ord(char) - ord('a')) % 26 - 1))
            else:
                result += char
        else:
            result += char
    return result