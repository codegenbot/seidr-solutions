```
def get_closest_vowel(word):
    word = word[::-1]  # reverse the string
    for i in range(len(word) - 2):  # iterate over the reversed string
        if word[i].lower() in 'aeiou' and not word[i+1].isalpha():  # check if it's a vowel and the next character is a consonant
            return word[i]  # return the closest vowel
    return ''  # return an empty string if no vowel met the condition