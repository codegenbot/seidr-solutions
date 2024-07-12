```Python
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.lower() not in vowels:  
            index = (ord(char.lower()) - ord('a')) % 26
            if index == 0:
                index = 26
            if char.lower() in 'ouieOUIE':
                index = ((index - 1) + 3) % 4
            else:
                index = ((index - 1) + 5) % 6
            result += chr((index) + ord('a'))
        else:  
            if char.lower() in 'ouieOUIE':
                index = (ord(char.lower()) - ord('o')) % 4
                result += chr((index + 1) % 4 + ord('o'))
            else:
                index = (ord(char.lower()) - ord('a')) % 6
                result += chr((index + 1) % 6 + ord('a'))
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))