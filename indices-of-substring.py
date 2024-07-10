def indices_of_substring(text):
    try:
        text = str(text)
        target = int(input())
        result = [i for i in range(len(text)) if text.startswith(str(target), i)]
        print(*result, sep="\n")
    except ValueError:
        pass