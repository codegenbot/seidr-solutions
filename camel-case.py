def camel_case(s):
    words = re.split("-| ", s)
    if not words:
        return ""
    return words[0] + "".join(word.capitalize() if i > 0 else word for i, word in enumerate(words[1:]))