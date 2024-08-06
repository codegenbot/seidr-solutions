Here is the solution:

def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(i) and len(text[i:i+len(text)-1]) > len(text)] + list(range(len(text)))

print(indices_of_substring(input()))