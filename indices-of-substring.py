def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i : i + len(input())] == input():
            result.append(i)
    return result