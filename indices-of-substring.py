Here is the solution:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text[i:].index(input()) + i
                result.append(start)
                i = start
                if not text[start+len(input()):].startswith(input()):
                    break
    return result