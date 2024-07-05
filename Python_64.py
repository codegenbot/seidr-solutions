def vowels_count(s):
    s = s.lower()
    vowels = "aeiou"
    count = sum(1 for char in s if char in vowels)
    if s.endswith('y'):
        count += 1
    return count

# Add more test cases
print(vowels_count("abcde"))  # 2
print(vowels_count("ACEDY"))  # 3
print(vowels_count("sky"))    # 1
print(vowels_count("rhythm")) # 0
print(vowels_count("AEIOUY")) # 6