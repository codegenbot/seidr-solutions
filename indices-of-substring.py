def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text[i:].index(input()) + i
                end = start + len(input())
                result.append(start)
                if start == len(text) - 1 or not text[start + 1 : end].startswith(
                    input()
                ):
                    break
    return result