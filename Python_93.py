def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'A'
                elif char == 'Y' or char == 'y':
                    result += 'B'
                else:
                    result += chr(ord(char.lower()) + 1).upper()
            else:
                if char.islower():
                    if char in 'aeiou':
                        result += {chr: 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 's'}[char]
                    else:
                        result += chr(ord(char) + 1)
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result