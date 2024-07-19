def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char in vowels:
                index = (ord(char) - ord("a") + 2) % 26
                result += chr(ord("a") + index)
            else:
                if char.isupper():
                    result += chr((ord(char) - ord("A")) % 26 + ord("A"))
                else:
                    result += chr((ord(char) - ord("a")) % 26 + ord("a"))
        else:
            result += char
    return result