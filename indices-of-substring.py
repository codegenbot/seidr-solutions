def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    j = text.index(input(), i)
                    if j == 0 or text[j - 1] != text[i - 1]:
                        result.append(i)
                        break
                except ValueError:
                    return result