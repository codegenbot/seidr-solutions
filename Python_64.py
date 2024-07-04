def vowels_count(s):
    s = s.lower()
    vowels = 'aeiou'
    count = sum(1 for char in s if char in vowels)
    if s and s[-1] == 'y':
        count += 1
    return count

# Test cases
print(vowels_count("abcde"))  # 2
print(vowels_count("ACEDY"))  # 3
print(vowels_count("sky"))    # 1
print(vowels_count("rhythm")) # 0
print(vowels_count("aeiouy")) # 6