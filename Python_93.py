def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 13) % 26).lower()
            else:
                result += chr((ord(char) - 97 + 13) % 26 + 97)
        else:
            result += char
    vowels = "aeiouAEIOU"
    for i in range(len(result)):
        if result[i] in vowels:
            result = (
                result[:i] + chr((ord(result[i]) + 2 - 97) % 26 + 97) + result[i + 1 :]
            )
    return result