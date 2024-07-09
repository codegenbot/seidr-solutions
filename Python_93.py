def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) + 2 - ord('A' if char.isupper() else 'a')) % 26 + ord('A' if char.isupper() else 'a'))
            else:
                encoded_message += chr((ord(char) + 2 - ord('A' if char.isupper() else 'a')) % 26 + ord('A' if char.isupper() else 'a'))
        else:
            encoded_message += char
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))