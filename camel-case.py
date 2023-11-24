def kebab_to_camel_case(string):
    words = string.split(" ")
    camel_case_words = []
    for word in words:
        if "-" in word:
            word_parts = word.split("-")
            camel_case_word = word_parts[0] + ''.join([part.title() for part in word_parts[1:]])
            camel_case_words.append(camel_case_word)
        else:
            camel_case_words.append(word)
    return " ".join(camel_case_words)