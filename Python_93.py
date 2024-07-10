```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.lower() in vowels:
            index = ord(char.lower()) - 97
            next_index = (index + 1) % 5
            result += chr(97 + next_index).upper() if char.isupper() else chr(97 + next_index).lower()
        elif not char.isalpha():
            result += char
        else:
            result += 'x'
    return result