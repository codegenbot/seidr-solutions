def count_vowels_and_consonants(s):
    vowels = sum(1 for c in s if "a" <= c.lower() <= "e")
    consonants = sum(1 for c in s if "f" <= c.lower() <= "z")
    return vowels, consonants