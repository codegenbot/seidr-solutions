```
def get_closest_vowel(word):
    word = word[::-1]  # Reverse the word
    for i in range(len(word) - 2):  # Iterate over the reversed word
        if word[i].lower() in 'aeiou' and not word[i+1].lower().isalpha():  # Check if it's a vowel and next character is not a letter
            return word[i]  # Return the closest vowel
    return ""  # If no vowel found, return an empty string