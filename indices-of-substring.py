Here is the solution:

def indices_of_substring(text):
    indexes = []
    for i in range(len(text)):
        if text[i:i+len(input())] == input():
            indexes.append(i)
    return indexes