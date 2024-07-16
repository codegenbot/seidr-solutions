Here is the solution to the problem:

def indices_of_substring(text):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(text[i:i+1], i)
        if pos != -1:
            result.append(pos)
        i += 1
    return result