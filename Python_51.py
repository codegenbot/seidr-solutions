```
def remove_vowels(text):
    return ''.join([char for char in text if char.lower() not in 'aeiou'])