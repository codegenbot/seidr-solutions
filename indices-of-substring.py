Here is the completed code:

def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(target) and i > 0 or target == '']

text = input()
target = int(input())
print(indices_of_substring(text))