Here is the completed code:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start_index = text[i:].find(input()) + i
                if start_index == len(text) or not text[start_index:].startswith(input()):
                    break
                result.append(start_index)
    return result