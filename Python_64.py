def vowels_count(s):
    vowels = set('aeiouAEIOU')
    count = sum(1 for char in s if char in vowels)
    if s and s[-1] in 'yY':
        count += 1
    return count

# Test cases
print(vowels_count("abcde"))  # 2
print(vowels_count("ACEDY"))  # 3
print(vowels_count("hello"))  # 2
print(vowels_count("sky"))    # 1
print(vowels_count("rhythm")) # 1