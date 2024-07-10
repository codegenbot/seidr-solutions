def indices_of_substring(text):
    try:
        target = int(input())
    except ValueError:
        target = input()
    return [i for i in range(len(text)) if text.startswith(target, i)]