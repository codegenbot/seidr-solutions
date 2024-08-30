def indices_of_substring(text):
    result = []
    target_len = len(input())
    for i in range(len(text)):
        if text[i : i + target_len] == str(target_len):
            result.append(i)
    return result