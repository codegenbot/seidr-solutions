```
def count_vowels_and_consonants(input_string: str) -> (int, int):
    vowels = 'aeiouAEIOU'
    vowel_count = sum(1 for char in input_string if char in vowels)
    consonant_count = len(input_string) - vowel_count
    return vowel_count, consonant_count