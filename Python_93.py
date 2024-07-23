def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char.lower()) - ord("a") + 3) % 26 + ord("a"))
            else:
                if char.isupper():
                    result += char.lower()
                else:
                    result += char.upper()
        else:
            result += char
    return result