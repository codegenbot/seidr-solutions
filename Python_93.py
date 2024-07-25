def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')) if char.islower() else chr((ord(char.lower()) - ord('A') + 3) % 26 + ord('A'))
            elif char.isdigit():
                result += str(int(char) + 3)
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))