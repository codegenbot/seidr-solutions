def indices_of_substring(text):
    result = []
    start_index = 0
    while True:
        start_index = text.find(target_string, start_index)
        if start_index == -1:
            break
        result.append(start_index)
        start_index += len(target_string)
    return result


text = input()
target_string = int(input())
print(indices_of_substring(text))