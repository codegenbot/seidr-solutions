def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        word_list = txt.replace(",", " ")
        return word_list.split()