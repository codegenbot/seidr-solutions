def vowels_count(s):
    vowels = 'aeiou'
    s = s.lower()
    count = sum(1 for char in s if char in vowels)
    if s.endswith('y'):
        count += 1
    return count

# Test cases
print(vowels_count("abcde"))  # 2
print(vowels_count("ACEDY"))  # 3
print(vowels_count("rhythm"))  # 1
print(vowels_count("sky"))     # 1
print(vowels_count("python"))  # 1