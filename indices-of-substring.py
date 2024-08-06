Here is the solution:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                pos = text[i:].find(input())
                if pos == -1: break
                result.append(i + pos)
                i += pos + 1
    return result