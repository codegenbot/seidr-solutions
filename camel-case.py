def camel_case(s):
    words = s.split("-")
    new_words = [words[0]]
    for word in words[1:]:
        new_words.append(word.capitalize())
    return "".join(new_words)