def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i <= len(input()):
            substring = text[i : i + len(input())]
            if input() == substring:
                result.append(i)
    return result