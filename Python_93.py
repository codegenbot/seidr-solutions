```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 13) % 26)
            else:
                result += chr((ord(char) - 97 + 13) % 26).upper()
        else:
            result += char
    vowels = 'aeiouAEIOU'
    for i in range(len(result)):
        if result[i] in vowels:
            pos = (vowels.index(result[i]) + 2)
            if pos > 4: 
                pos -= 26
            result = result[:i] + vowels[pos] + result[i+1:]
    return result