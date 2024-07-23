def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word[0].upper() + word[1:].lower() if i == 0 else 
                   word.capitalize() for i, word in enumerate(words))