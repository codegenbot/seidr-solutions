Here is the solution:

def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(' ' * (i + 1), len(text) - len(' ' * (i + 1)) + 1)]

text = input()
print(indices_of_substring(text))