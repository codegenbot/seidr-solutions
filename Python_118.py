def get_closest_vowel(word):
    word = word.lower()[::-1]  # reverse the string and convert to lowercase
    for i in range(len(word) - 2):  # iterate over the reversed string
        if "aeiou".find(word[i]) != -1:  # check if it's a vowel
            return word[i]  # return the closest vowel
    return ""  # return an empty string if no vowel met the condition