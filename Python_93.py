def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 1) % 5
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:  
                index = ord(char.lower()) - ord('a')  
                result += 'abcdefghijklmnopqrstuvwxyz'[index % 26].upper() if char.isupper() else 'abcdefghijklmnopqrstuvwxyz'[index % 26].lower()
        else:
            result += char
    return result