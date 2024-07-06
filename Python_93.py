```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                elif char.lower() == 'u':
                    result += 'x'
            else:
                if char.isupper():
                    result += chr((ord(char) + 1 - ord('A')) % 26 + ord('A'))
                else:
                    result += chr((ord(char) + 1 - ord('a')) % 26 + ord('a'))
        else:
            result += char
    return result