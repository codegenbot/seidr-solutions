def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr((ord(char) + 2 - ord('A')) % 26 + ord('A')).upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    
    return encoded_message

encode("I DoNt KnOw WhAt tO WrItE") == "K FqPv MqQy YjCt Vq YtKvG"