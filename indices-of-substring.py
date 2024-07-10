Here is the Python solution for the problem:

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

text = input()
target = int(input())
print(indices_of_substring(text, text[target]))