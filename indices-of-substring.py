Here is the solution:

def indices_of_substring(text):
    indices = [i for i in range(len(text)) if text.startswith(i)]
    return [str(j) for j in indices]