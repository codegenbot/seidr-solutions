Here is the Python code that solves the problem:

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

# Read input from user
text = input()
target_length = int(input())
target = input()

print(indices_of_substring(text, target))