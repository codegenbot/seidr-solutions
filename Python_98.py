def count_vowels_and_consonants(input_string):
    vowels = "AEIOU"
    vowel_count = sum(1 for c in input_string if c.upper() in vowels)
    consonant_count = sum(
        1 for c in input_string if c.isalpha() and c.upper() not in vowels
    )
    return f"Vowels: {vowel_count}, Consonants: {consonant_count}"