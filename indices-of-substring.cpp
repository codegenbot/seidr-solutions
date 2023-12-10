def indices_of_substring(text: str, target: str) -> List[int]:
    result = []
    for i in range(len(text)):
        if text[i] == target[0]:
            found = True
            for j in range(1, len(target)):
                if text[i + j] != target[j]:
                    found = False
                    break
            if found:
                result.append(i)
    return result