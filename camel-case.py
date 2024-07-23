def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() if i == 0 else prev_word + word[0].upper() + word[1:].lower() for i, (prev_word, word) in enumerate(zip([None]+words, words), 1))