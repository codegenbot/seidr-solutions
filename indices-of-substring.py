def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                i += len(input())
                if not text[i:].startswith(input()):
                    break
            result.append(str(i))
    return [int(x) for x in result.split(",")]