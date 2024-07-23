Here is the solution:

def indices_of_substring(text):
    result = [0]
    for i in range(1, len(text)):
        if text[i:] == input():
            result.append(i)
    return result