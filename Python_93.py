def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                elif char.lower() == 'u':
                    result += 'y'
            else:
                if char.islower():
                    result += chr(ord('a') + (ord(char) - ord('a')) % 26)
                else:
                    result += chr(ord('A') + (ord(char) - ord('A')) % 26)
        else:
            result += char
    return result