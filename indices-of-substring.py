def indices_of_substring(text, target):
    return [text.find(target + "@" + str(i)) for i in range(len(text))]