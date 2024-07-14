Here is the completed Python code for the "indices-of-substring" problem:

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

print(indices_of_substring(input(), input()))