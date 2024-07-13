def indices_of_substring(text):
    indices = []
    index = text.find(input())
    while index != -1:
        indices.append(index)
        index = text.find(input(), index + 1)
    return indices