def count_vowels_and_consonants(input_string):
    vowels = 'aeiou'
    vowel_count = 0
    consonant_count = 0
    
    for char in input_string:
        if char.lower() in vowels:
            vowel_count += 1
        elif char.isalpha():
            consonant_count += 1
    
    return vowel_count, consonant_count