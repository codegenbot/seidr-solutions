```Python
text_input = input("Enter the text: ")
target_input = input("Enter the target: ")

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target_input):
            while True:
                pos = text[i:].find(target_input)
                if pos == -1:
                    break
                result.append(i + pos)
                i += pos + 1
    return result

result = indices_of_substring(text_input)
print(result)