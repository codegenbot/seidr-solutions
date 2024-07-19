def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.lower()) - ord('a') + 5) % 26 + ord('a')) if char.islower() else chr((ord(char.lower()) - ord('A') + 5) % 26 + ord('A'))
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message