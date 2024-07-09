def indices_of_substring(text, target_string):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target_string, index)
        if pos != -1:
            result.append(pos)
            index = pos + 1
        else:
            break
    return result

text = input()
target_string = input()
print(indices_of_substring(text, target_string))