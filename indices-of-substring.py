Here is the completed Python code:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                pos = text[i:].index(input())
                result.append(i + pos)
                i += pos
                if not text[i:].startswith(input()):
                    break
    return result