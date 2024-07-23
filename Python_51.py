def remove_vowels(text):
    return ''.join([char for char in text.lower() if char not in 'aeiou'])