Here is the solution:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = i
                end = i + len(input())
                if end > len(text) or not text[end:].startswith(input()):
                    result.append(start)
                    break
                i += 1
    return sorted(result)