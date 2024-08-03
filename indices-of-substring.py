def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = len(str(input()))
            while True:
                try:
                    index = text[
                        i + start_index : i + start_index + len(str(input()))
                    ].index(str(input())[0])
                    result.append(i + start_index + index)
                except ValueError:
                    break
    return result