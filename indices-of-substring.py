```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                start_index += 1
                if text[start_index:start_index+len(input())] != input():
                    end_index = start_index - 1
                    result.append(i)
                    break
    return result