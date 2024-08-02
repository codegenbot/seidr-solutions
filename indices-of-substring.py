def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                start_index += 1
                try:
                    text[start_index:].index(input())
                except ValueError:
                    break
            result.append(start_index)
    return result