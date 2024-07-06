```
def get_closest_vowel(word):
    word = word[::-1]  # Reverse the word
    for i in range(len(word) - 2):  # Iterate over the reversed word
        if word[i].lower() in 'aeiou' and word[i+1].lower() not in 'aeiou':  # Check if current char is a vowel and next one is not
            return word[i]  # Return the vowel
    return ""  # If no vowel found, return an empty string