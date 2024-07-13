def indices_of_substring(text):
    target = input()
    result = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target]
    return str(result)