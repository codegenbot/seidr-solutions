def indices_of_substring(text):
    text_target = input()
    result = [i for i in range(len(text) - len(text_target) + 1) if text[i:i+len(text_target)] == text_target]
    return str(result)