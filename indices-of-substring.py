Here is the completed code:

def indices_of_substring():
    text = input()
    target = int(input())
    result = [i for i in range(len(text)) if text.startswith(str(target), i)]
    print(' '.join(map(str, result)))