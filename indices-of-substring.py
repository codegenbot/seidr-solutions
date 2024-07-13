Here is the solution:

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while text[i:].startswith(input()):
                i += len(input())
            result.append(i)
    return result