Here is the solution:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                try:
                    index = text.index(input(), i + 1)
                    result.append(index)
                    i = index
                except ValueError:
                    break
    return result