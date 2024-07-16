Here is the solution:

def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(f"{text[i:]}")]

input_text = input()
print(indices_of_substring(input_text))