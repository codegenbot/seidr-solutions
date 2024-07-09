def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'c' if char.islower() else 'C'
            elif char.lower() == 'e':
                result += 'g' if char.islower() else 'G'
            elif char.lower() == 'i':
                result += 'k' if char.islower() else 'K'
            elif char.lower() == 'o':
                result += 'q' if char.islower() else 'Q'
            elif char.lower() == 'u':
                result += 'w' if char.islower() else 'W'
            elif char.lower() in ['a', 'e', 'i', 'o', 'u']:
                result += 'z' if char.islower() else 'Z'
            else:
                result += char.swapcase()
        else:
            result += char
    return result