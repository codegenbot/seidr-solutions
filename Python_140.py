def count_vowels_and_consonants(text):
    vowels = 'aeiouAEIOU'
    text = text.replace(' ', '')
    vowel_count = sum(1 for char in text if char in vowels)
    consonant_count = len(text) - vowel_count
    return f'Vowels: {vowel_count}, Consonants: {consonant_count}'