def count_vowels(input_string):
    input_string = input_string.lower()
    vowels = "aeiou"
    count = 0
    for char in input_string:
        if char in vowels:
            count += 1
    return count