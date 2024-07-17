def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i <= len(result[-1]) + 1:
            break
        for j in range(i + len(result[-1]) + 1, len(text) + 1):
            if text[i:j] == result[-1]:
                break
        else:
            continue
        while i + j > len(text):
            i -= 1
        result.append(str(i))
    return [int(i) for i in set(map(int, result))]