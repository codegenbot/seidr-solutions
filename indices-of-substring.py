```
def indices_of_substring(text):
    indexes = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                if text[i:].startswith(input()):
                    end_index = i + len(input()) - 1
                    indexes.append(str(start_index))
                    i = end_index + 1
                else:
                    break
    return [int(i) for i in indexes]