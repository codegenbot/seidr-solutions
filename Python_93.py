
def encode(message):
    """
    Write a function that takes a message, and encodes in such a 
    way that it swaps case of all letters, replaces all vowels in 
    the message with the letter that appears 2 places ahead of that 
    vowel in the english alphabet. 
    Assume only letters. 
    
    Examples:
    >>> encode('test')
    'TGST'
    >>> encode('This is a message')
    'tHKS KS C MGSSCGG'
    """
    # Complete the following code given the task description and function signature.
    # You may use the following helper function.
    def is_vowel(letter):
        return letter in 'aeiou'

    # Your code here
    encoded_message = ""
    for i in range(len(message)):
        if is_vowel(message[i]):
            encoded_message += chr(ord(message[i]) + 2)
        elif message[i].isupper():
            encoded_message += message[i].lower()
        elif message[i].islower():
            encoded_message += message[i].upper()
        else: 
            encoded_message += message[i]

    return encoded_message
