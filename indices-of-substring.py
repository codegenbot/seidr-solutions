def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start_index = text[i:].index(input()) + i
                end_index = start_index + len(input())
                if not text[start_index:end_index].startswith(input()):
                    break
                result.append(start_index)
                i = end_index
    return result