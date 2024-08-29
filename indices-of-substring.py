def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            while True:
                try:
                    start_index = text.index(target, start_index+1)
                except ValueError:
                    break
                result.append(start_index)
    return result