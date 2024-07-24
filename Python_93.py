def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                new_char = chr((ord(char) - ord('a') + 1) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
            result += new_char
        else:
            result += char
    return result