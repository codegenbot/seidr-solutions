Here is the solution:

def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(text[i:], len(text)-len(text[i:])+1)]

text = input()
print(indices_of_substring(text))