def get_closest_vowel(word):
    word = word[::-1]  # reverse the string
    for i in range(len(word) - 2):  # iterate over the reversed string
        if (
            word[i].lower() in "aeiou" and not word[i + 1].isalpha()
        ):  # check if current char is vowel and next one is not
            return word[i].upper() if word[i].isalpha().isupper() else word[i].lower()
    return ""