def remove_vowels(text):
    vowels = ['a', 'e', 'i', 'o', 'u']
    return ''.join([char for char in text if char.lower() not in vowels])