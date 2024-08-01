def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                i += 1
                if text[i:].startswith(input()):
                    end_index = i
                    result.append(start_index)
                    start_index = i
                else:
                    break
    return result