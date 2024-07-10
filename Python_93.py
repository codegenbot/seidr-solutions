def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord('a') - ord('a') + ord(char.lower()) - ord('a')) % 5
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                result += 'x'
        else:
            result += char
    return result