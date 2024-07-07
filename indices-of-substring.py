def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = i + len(input())
            while j <= len(text) and text[j - 1 : j + len(input()) - 1].startswith(
                input()
            ):
                j += len(input())
            result.append(i)
    return result