def indices_of_substring(text):
    result = []
    start_index = 0
    while True:
        position = text.find(text[start_index:], 0)
        if position == -1:
            break
        result.append(position)
        start_index += position + len(text[:position])
    return result


text = input()
result = indices_of_substring(text)
print(*result, sep="\n")