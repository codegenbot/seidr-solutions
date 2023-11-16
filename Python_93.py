
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
    encoded_message = ''
    for letter in message:
        if letter.isupper():
            encoded_message += letter.lower()
        else:
            encoded_message += letter.upper()

    encoded_message = list(encoded_message)
    for i in range(len(encoded_message)):
        if is_vowel(encoded_message[i]):
            if encoded_message[i] == 'u':
                encoded_message[i] = 'a'
            elif encoded_message[i] == 'z':
                encoded_message[i] = 'b'
            else:
                encoded_message[i] = chr(ord(encoded_message[i]) + 2)

    return ''.join(encoded_message)
