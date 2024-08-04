```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                end_index = start_index + len(input())
                if text[start_index:end_index] != input():
                    break
                start_index += 1
                if start_index == end_index:
                    break
            result.append(start_index)
    return result